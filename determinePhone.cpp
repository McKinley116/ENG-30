#include <iostream>
using namespace std;

// Function Prototype 
void phoneNumber(char array_name[], int array_size);

int main ()
{
    const int SIZE = 7; // constant size of array
    char letter[SIZE];

    cout << "Please enter 7 characters and I will output the corresponding phone number: ";

  // loop allows user to add 7 letters and prints
  for (int i = 0 ; i < SIZE ; i++){cin >> letter[i];}

    phoneNumber(letter, SIZE); // function call 

    return 0;
}

void phoneNumber(char array_name[], int array_size)
{
    cout << "The telephone number you are dialing is ";
    
    for (int i = 0; i < array_size; i++) // iterates through an array based on name and its size
    {
        switch (array_name[i]) // takes the array element and determines which case applies
        {
        case 'a':
        case 'b':
        case 'c':
            cout << "2";
            break;

        case 'd':
        case 'e':
        case 'f':
             cout << "3";
             break;

        case 'g':
        case 'h':
        case 'i':
            cout << "4";
            break;

        case 'm':
        case 'n':
        case 'o':
            cout << "5";
            break;
        case 'p':
        case 'r':
        case 's':
            cout << "6";
            break;

        case 't':
        case 'u':
        case 'v':
            cout << "7";
            break;

        case 'w':
        case 'x':
        case 'y':
            cout << "8";
            break;
        
        case 'q':
        case 'z':
            cout << "This letter is not used!" << endl;
            break;
        
        default:
        cout << "Error!" << endl; 
            break;
        }

        if (i == 2){cout << "-";}
    }
    cout << endl;

}
