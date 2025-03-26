#include <iostream>
using namespace std;

int main ()
{
    const int SIZE = 15; // Adjusted to 15 since you are asking for 15 integers
    int sortedSize = 0;
    int unsorted[SIZE];
    int sorted[SIZE]; // Adjusted to SIZE
    int* sortedPtr = sorted; // assigns pointer to array
    int* unsortedPtr = unsorted; // assigns pointer to array 

    cout << "Please enter 15 integers: " << endl; 
    for (int i = 0; i < SIZE; i++){cin >> *(unsortedPtr + i);} // Adjusted loop condition

    // remove duplicates to store in sorted array
    for (int i = 0; i < SIZE; i++ )
    {
        // tracks if a num is a duplicate
        int dupe = 0;
        // checks if element is in our sorted array
        for (int j = 0; j < sortedSize; j++) // Adjusted loop condition
        {
            if (*(sorted + j) == *(unsorted + i)) // dereference element to pull value not address 
            {
                dupe = 1;
                break; // ends
            }
        }

        // if the element is not a duplicate, then add to sorted array 
        if (dupe == 0)
        {
            *(sorted + sortedSize) = *(unsorted + i); // points sorted pointer to the element that is new from the unsorted pointer
            sortedSize++;
        }
    }

    cout << "The new array : " << endl;
    for (int i = 0; i < sortedSize; i++){cout << *(sorted + i) << " ";}
   
    return 0;
}