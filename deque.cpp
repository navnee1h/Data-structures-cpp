#include <iostream>
using namespace std;

const int MAX = 5; // Maximum size of the deque

class Deque {
private:
    int arr[MAX]; // Array to store deque elements
    int front, rear, size;

public:
    Deque() : front(0), rear(-1), size(0) {}

    bool isFull() {
        return size == MAX;
    }

    bool isEmpty() {
        return size == 0;
    }

    void addFront(int value) {
        if (isFull()) {
            cout << "Deque is full!" << endl;
            return;
        }
        front = (front - 1 + MAX) % MAX;
        arr[front] = value;
        size++;
    }

    void addRear(int value) {
        if (isFull()) {
            cout << "Deque is full!" << endl;
            return;
        }
        rear = (rear + 1) % MAX;
        arr[rear] = value;
        size++;
    }

    void removeFront() {
        if (isEmpty()) {
            cout << "Deque is empty!" << endl;
            return;
        }
        cout << "Removed from front: " << arr[front] << endl;
        front = (front + 1) % MAX;
        size--;
    }

    void removeRear() {
        if (isEmpty()) {
            cout << "Deque is empty!" << endl;
            return;
        }
        cout << "Removed from rear: " << arr[rear] << endl;
        rear = (rear - 1 + MAX) % MAX;
        size--;
    }

    void display() {
        if (isEmpty()) {
            cout << "Deque is empty!" << endl;
            return;
        }
        cout << "Deque contents: ";
        for (int i = 0; i < size; i++) {
            cout << arr[(front + i) % MAX] << " ";
        }
        cout << endl;
    }
};

int main() {
    Deque dq; // Create a deque

    dq.addRear(10); // Add elements
    dq.addRear(20);
    dq.addFront(30);

    dq.display(); // Show deque contents

    dq.removeFront(); // Remove elements
    dq.removeRear();

    dq.display(); // Show deque contents again

    return 0;
}
