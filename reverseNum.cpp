#include <iostream>
using namespace std;

// Function to reverse a number
int rev(int N) {
    int reversed = 0;
    while (N > 0) {
        reversed = reversed * 10 + (N % 10);
        N /= 10;
    }
    return reversed;
}

// Function to compute the difference between the original and reversed number
int differev(int N) {
    return N - rev(N);
}

int main() {
    int N;

    // Input number
    cout << "Enter a number: ";
    cin >> N;

    // Compute reversed number and difference
    int reversed = rev(N);
    int difference = differev(N);

    // Display results
    cout << "Original Number: " << N << endl;
    cout << "Reversed Number: " << reversed << endl;
    cout << "Difference (N - R): " << difference << endl;

    // Verify differev(N) + rev(N) = N
    if (difference + reversed == N) {
        cout << "Verification successful: " << difference << " + " << reversed << " = " << N << endl;
    } else {
        cout << "Verification failed!" << endl;
    }

    return 0;
}
