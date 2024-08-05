#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100; // Maximum size of the array
    int arr[MAX_SIZE]; // Array declaration
    int size = 0; // Current number of elements in the array
    int value; // Variable to store user input
    int indexToDelete; // Variable to store the index of the element to delete

    // Insert elements
    cout << "Enter number of elements to insert: ";
    int numElements;
    cin >> numElements;

    // Limit the number of elements to MAX_SIZE
    if (numElements > MAX_SIZE) {
        numElements = MAX_SIZE;
        cout << "Limiting to " << MAX_SIZE << " elements." << endl;
    }

    for (int i = 0; i < numElements; i++) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> value;
        arr[size] = value;
        size++;
    }

    // Display the array
    cout << "Array contents: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Delete an element
    cout << "Enter the index of the element to delete (0 to " << (size - 1) << "): ";
    cin >> indexToDelete;

    if (indexToDelete < 0 || indexToDelete >= size) {
        cout << "Invalid index!" << endl;
    } else {
        for (int i = indexToDelete; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; // Decrease the size of the array
    }

    // Display the array after deletion
    cout << "Array contents after deletion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
