#include <iostream>
using namespace std;

// Node structure for circular doubly linked list
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Circular Doubly Linked List class
class CircularDoublyLinkedList {
private:
    Node* head;

public:
    CircularDoublyLinkedList() : head(nullptr) {}

    // Add a node to the end of the list
    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = newNode;
        newNode->prev = newNode;

        if (head == nullptr) {
            // If the list is empty
            head = newNode;
            head->next = head;
            head->prev = head;
        } else {
            Node* last = head->prev;

            newNode->next = head;
            newNode->prev = last;
            last->next = newNode;
            head->prev = newNode;
        }
    }

    // Traverse and display the list
    void display() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    ~CircularDoublyLinkedList() {
        if (head == nullptr) return;
        Node* temp = head;
        do {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        } while (temp != head);
    }
};

int main() {
    CircularDoublyLinkedList list; // Create a circular doubly linked list

    list.insert(10); // Insert elements
    list.insert(20);
    list.insert(30);

    cout << "List contents: ";
    list.display(); // Display list contents

    return 0;
}
