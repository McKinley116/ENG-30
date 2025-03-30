#include <iostream>
using namespace std;

int main() {
    const int SIZE = 20; 
    int unique[SIZE] = {0};
    int number;

    cout << "Please enter 20 unique integers: " << endl;

    for (int i = 0; i < SIZE; i++) 
    {
        cin >> number;
        if (number >= 10 && number <= 100) {
            int duplicate = 0; // 0 means no duplicate found

            for (int j = 0; j < i; j++) 
            {
                if (number == unique[j]) // Check for duplicate
                { 
                    cout << "Duplicate Number!" << endl;
                    i--; // Allow user to enter a valid number again
                    duplicate = 1;
                    break; // Exit loop if duplicate is found
                }
            }

            if (duplicate == 0) { // Store only if it's not a duplicate
                unique[i] = number;
            }
        } else {
            cout << "Invalid Number" << endl;
            i--; // Allow user to enter a valid number again
        }
    }

    cout << "The following is the array with only unique integers: ";
    for (int i = 0; i < SIZE; i++) 
    {
        cout << unique[i] << " ";
    }
    
    return 0;
}
