#include <iostream>
using namespace std;

int main ()
{
    const int SIZE = 20; 
    int unique[SIZE] = {0};

    cout << "Please enter 20 unique integers: " << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cin >> unique[i];
        if (unique[i] >= 10 && unique[i] <= 100)
            for (int j = 0; j < SIZE; j++)
            {
                if (unique[j] != unique[i])
                     unique[j] = unique[i];
                 else
                     cout << "Duplicate Number!" << endl; 
            }
               
         else
            cout << "Invalid Number!"<< endl;            
    }
           
    return 0;
}
