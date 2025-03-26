#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Y axis increments 0.05
// X axis increments 0.02

int main()
{
     const double K = 0.25;
     const int SIZE_Y = 20; // increments of 0.05 to 1
     int index = 0; // needs an index to properly set the array elements to the proper data 
     double mech_pow[SIZE_Y] = {}; // Y axis of graph 

     // Solves Potential Energy
     for (double u = 0; u <= 1.0; u += 0.05 )
     {
        mech_pow[index] = (K * u * (1 - u)) / (K + u);
        index++;
     }

    // outputs mech_pow as * according to each x, y value
    for (int y = 0; y < SIZE_Y; y++) // rows
    {
        for (double x = 0.0; x <= 50.0; x += 0.02) // columns
        {
             cout << x << " "; 
        }
        cout << y << endl; 
 
    }

    return 0;
}


