#include <iostream>
using namespace std;

const int SIZE = 50; // Array size

// Function to initialize array with even numbers {2, 4, 6, ..., 100}
void initializeArray(int arr[]) {
    for (int i = 0; i < SIZE; i++) {
        arr[i] = (i + 1) * 2;
    }
}

// Function to reverse the array (rotate values)
void rotateArray(int arr[]) {
    for (int i = 0; i < SIZE / 2; i++) {
        swap(arr[i], arr[SIZE - 1 - i]);
    }
}

// Function to print the array
void printArray(const int arr[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[SIZE];

    // Initialize array
    initializeArray(arr);

    // Rotate array
    rotateArray(arr);

    // Print rotated array
    cout << "Rotated Array: ";
    printArray(arr);

    return 0;
}
