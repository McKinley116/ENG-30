#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Function prototypes

void showTable();
int calOhms(char array_name[], int array_size);

int main()
{
    const int SIZE = 3;
    char bands[SIZE] = {};
    int userChoice;

   cout << "Welcome, would you like to calculate(1) band resistance or view(2) the character code table?" << endl;
   cin >> userChoice;

   switch (userChoice)
   {
   case 1:
        cout << "We are ready to calulate your band resistance (ohms), please enter 3 band codes: ";
        for (int i = 0; i < SIZE; i++){cin >> bands[i];}
        cout << "Your band resistance is " <<  calOhms(bands, SIZE) << endl; 
        break;
    
    case 2:
        showTable();
        cout << "We are ready to calulate your band resistance (ohms), please enter 3 band codes: ";
        for (int i = 0; i < SIZE; i++){cin >> bands[i];}
        cout << "Your band resistance is " <<  calOhms(bands, SIZE) << endl; 
        break;
   
   default:
    break;
   }

   

    return 0;
}

//Functions 
void showTable()
{
    cout << setw(8) <<  " COLOR " << setw(10) << " CODE " << setw(12) << " CHARACTER CODE " << endl; 
    cout << setw(10) << "----------------------------------" << endl; 
    cout << setw(8) << "BLACK" << setw(8) << "0" << setw(10) << "B" << endl; 
    cout << setw(8) << "BROWN" << setw(8) << "1" << setw(10) << "N" << endl; 
    cout << setw(8) << "RED" << setw(8) << "2" << setw(10) << "R" << endl; 
    cout << setw(8) << "ORANGE" << setw(8) << "3" << setw(10) << "O" << endl; 
    cout << setw(8) << "YELLOW" << setw(8) << "4" << setw(10) << "Y" << endl; 
    cout << setw(8) << "GREEN" << setw(8) << "5" << setw(10) << "G" << endl; 
    cout << setw(8) << "BLUE" << setw(8) << "6" << setw(10) << "E" << endl; 
    cout << setw(8) << "VIOLET" << setw(8) << "7" << setw(10) << "V" << endl; 
    cout << setw(8) << "GRAY" << setw(8) << "8" << setw(10) << "A" << endl; 
    cout << setw(8) << "WHITE" << setw(8) << "9" << setw(10) << "W" << endl; 
};

int calOhms(char array_name[], int array_size) // takes a given array and size
{
    for (int i = 0; i <= array_size; i++) // loops throught the three elements imputed by the user and determines which code to use based on example table 1.
    {   
        switch(array_name[i])
        {
                case 'b':
                case 'B':
                array_name[i] = 0; // sets element i to code #
                break;
    
                case 'n':
                case 'N':
                array_name[i] = 1; 
                break;
    
                case 'r':
                case 'R':
                array_name[i] = 2; 
                break;
    
                case 'o':
                case 'O':
                array_name[i] = 3; 
                break;
    
                case 'y':
                case 'Y':
                array_name[i] = 4; 
                break;
    
                case 'g':
                case 'G':
                array_name[i] = 5; 
                break;
    
                case 'e':
                case 'E':
                array_name[i] = 6; 
                break;
    
                case 'v':
                case 'V':
                array_name[i] = 7; 
                break;
    
                case 'a':
                case 'A':
                array_name[i] = 8; 
                break;
    
                case 'w':
                case 'W':
                array_name[i] = 9; 
                break;
    
                default: 
            }
    }

    return (array_name[0] * 10 + array_name[1]) * pow(10, array_name[2]); // calculates resistance 
};

