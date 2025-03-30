#include <iostream>
using namespace std;

int main ()
{
    const int SIZE = 20; 
    int unique[SIZE] = {0};
    int number;

    cout << "Please enter 20 unique integers: " << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cin >> number;
        if (number >= 10 && number <= 100)
        {
                unique[i] = number;
                for (int j = 0; j < i ; j++)
                {
                    if (number == unique[j])
                    {
                        cout << "Duplicate Number!" << endl; 
                        i--; // allows to program to continue until the user inputs a proper number
                        break; // exits if duplicate is found
                    }  else
                        unique[i] = number;
                }
               
        } else 
            cout << "Invalid Number" << endl;              
    }

    cout << "The following is the array with only unique integers: ";
    for (int i = 0; i < SIZE; i++){cout << unique[i] << " ";}
           
    return 0;
}
