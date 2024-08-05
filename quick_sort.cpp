#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Step 1: Choose the last element as pivot
    int i = low - 1; // Step 2: Index of smaller element

    // Step 3: Rearrange elements around the pivot
    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]); // Step 4: Swap elements smaller than pivot to the left
        }
    }
    swap(arr[i + 1], arr[high]); // Step 5: Place the pivot in its correct position
    return i + 1; // Step 6: Return the partitioning index
}

// Function to perform quicksort
void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high); // Step 7: Partition the array
        quickSort(arr, low, pi - 1); // Step 8: Recursively sort elements before partition
        quickSort(arr, pi + 1, high); // Step 9: Recursively sort elements after partition
    }
}

int main() {
    // Step 10: Initialize an array
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Step 11: Call quickSort on the array
    quickSort(arr, 0, n - 1);

    // Step 12: Print the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
