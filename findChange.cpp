#include <iostream>
using namespace std;



int main ()
{
    int quarters, nickels, dimes, pennies, totalCents;
    
    cout << "Please enter the total amount of cents you have: ";
    cin >> totalCents; 

     //finds total for quarters and takes the remainder for the next coins
     quarters = totalCents / 25; // total quarters
     totalCents = totalCents % 25;
      //finds total for dimes and takes the remainder for the next coins
     dimes = totalCents / 10; // total dimes 
     totalCents = totalCents % 10;
       //finds total for nickels and takes the remainder for the next coins
     nickels = totalCents / 5; // total nickels 
     totalCents = totalCents % 5;
        //finds total for pennies and discards the remainder
     pennies = totalCents; // total pennies 

    cout << "Quarters = " << quarters << endl;
    cout << "Dimes = " << dimes << endl;
    cout << "Nickels = " << nickels << endl;
    cout << "Pennies = " << pennies << endl;
   
    return 0;
}

