#include <iostream>
using namespace std;

int main ()
{
    int hours, minutes, seconds, totalTime;
    
    cout << "Please enter the total amount of time in seconds: ";
    cin >> totalTime; 

     //finds total hours, 3600 seconds in an hour
     hours = totalTime / 3600 ; 
     totalTime = totalTime % 3600;
      //finds total minutes, 60 minutes in an hour
     minutes = totalTime / 60; 
     totalTime = totalTime % 60;
       //finds total seconds
     seconds = totalTime; 
     
       
    cout << "Hours = " << hours << endl;
    cout << "Minutes = " << minutes << endl;
    cout << "Seconds = " << seconds << endl;
    
   
    return 0;
}
