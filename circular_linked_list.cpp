#include <iostream>
using namespace std;

// Node structure for circular linked list
struct Node {
    int data;
    Node* next;
};

// Circular Linked List class
class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    // Add a node to the end of the list
    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        if (head == nullptr) {
            // If the list is empty
            head = newNode;
            newNode->next = head; // Point to itself
        } else {
            Node* temp = head;
            // Traverse to the last node
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head; // Point to head to complete the circle
        }
    }

    // Traverse and display the list
    void traverse() {
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

    ~CircularLinkedList() {
        if (head == nullptr) return;
        Node* temp = head;
        Node* nextNode;
        // Traverse the list and delete nodes
        do {
            nextNode = temp->next;
            delete temp;
            temp = nextNode;
        } while (temp != head);
    }
};

int main() {
    CircularLinkedList list; // Create a circular linked list

    list.insert(10); // Insert elements
    list.insert(20);
    list.insert(30);

    list.traverse(); // Display list contents

    return 0;
}
