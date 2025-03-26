#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int year;

    cout << "Please enter a year to determine if it is a leap year! " << endl;
    cin >> year;

   if (year % 400 == 0){ cout << year << " is a Leap Year!" << endl;}
   else if (year % 100 == 0) { cout << year << " is not a Leap Year!" << endl;}
   else if (year % 4 == 0 ) {cout << year << " is a Leap Year!" << endl;}
   else {cout << year << " is a Leap Year!" << endl;}

    return 0;
}


// old if else that didnt work 
/* if (year % 4 == 0)
    {
        cout << year << " is a Leap Year!" << endl;
    }
        
    else if( year % 100 == 1 )
    {
        cout << year << " is not a Leap Year!" << endl;
    }
    else if (year % 400 == 0)
    {
        cout << year << " is a Leap Year!" << endl;
    }
    else 
        cout << year << " is not a Leap Year!" << endl; */