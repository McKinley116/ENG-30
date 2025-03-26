#include <iostream>
using namespace std;

int findDuplicate(int array_name[], int array_size, int duplicate, int array_name2[], int array_size2);

int main()
{
    const int SIZE = 16;
    int unsorted[SIZE];
    int sorted[SIZE];
    int duplicate;

    cout << "Please enter 15 intergers: " << endl; 
    for (int i = 0; i < SIZE; i++){cin >> sorted[i];}
    
    findDuplicate(sorted, SIZE, duplicate, unsorted, SIZE);

    for (int i = 0; i < SIZE; i++){cout << sorted[i] << " " << endl;}

    return 0;
}

int findDuplicate(int array_name[], int array_size, int duplicate, int array_name2[], int array_size2)
{
    for (int i = 0; i <= array_size; i++) // loops through first array to determine if element has a duplicate
    {
        array_name[i] = duplicate; // assigns element to duplicate variable
        for (int i = 0; i <= array_size; i++) // loops through and checks for duplicate
        {
            if(duplicate == array_name[i + 1]) 
            {
                duplicate = array_name2[i]; // sends the unsorted array if has duplicate
            } else if (duplicate != array_name[i])
            {
                duplicate = array_name[i]; // if it does not have a match, stays in sorted array
            } else{}
        }
    }
    return 0;
}