#include <iostream>
using namespace std;

const int MAX = 5; // Maximum size of the queue

class Queue {
private:
    int arr[MAX]; // Array to store queue elements
    int front, rear, size;

public:
    Queue() : front(0), rear(-1), size(0) {}

    bool isFull() {
        return size == MAX;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return;
        }
        rear = (rear + 1) % MAX;
        arr[rear] = value;
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Removed: " << arr[front] << endl;
        front = (front + 1) % MAX;
        size--;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue contents: ";
        for (int i = 0; i < size; i++) {
            cout << arr[(front + i) % MAX] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q; // Create a queue

    q.enqueue(10); // Add elements
    q.enqueue(20);
    q.enqueue(30);

    q.display(); // Show queue contents

    q.dequeue(); // Remove elements
    q.dequeue();

    q.display(); // Show queue contents again

    return 0;
}
