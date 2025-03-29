#include <iostream>
using namespace std;


//Function prototypes

int main()
{
    const int SIZE = 20; 
    int unique[SIZE] = {0};

    cout << "Please choose 20 integers to input: " << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cin >> unique[i];
        if (unique[i] >= 10 && unique[i] <= 100)
        {
            unique[i] = unique[i];
        } else
            cout << "Invalid Number!" << endl; 
    }

    //for (int i = 0; i < SIZE; i++){cout << unique[i] << " ";}


    return 0;
}

//Functions
