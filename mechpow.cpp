#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    const double K = 0.25;
    const int SIZE_Y = 21; // increments of 0.05 from 0 to 1 (inclusive)
    double mech_pow[SIZE_Y] = {}; // Y axis of graph 

    // Calculate mechanical power for each value of u
    for (int i = 0; i < SIZE_Y; ++i)
    {
        double u = i * 0.05;
        mech_pow[i] = (K * u * (1 - u)) / (K + u);
    }

    // Print the header row
    cout << "P\t";
    for (double x = 0.0; x <= 0.10; x += 0.02)
    {
        cout << fixed << setprecision(2) << x << "\t";
    }
    cout << endl;

    // Print the mechanical power values and plot '*'
    for (int i = 0; i < SIZE_Y; ++i)
    {
        double u = i * 0.05;
        cout << fixed << setprecision(2) << u << "\t";

        for (double x = 0.0; x <= 0.10; x += 0.02)
        {
            if (fabs(mech_pow[i] - x) < 0.01)
            {
                cout << "*\t";
            }
            else
            {
                cout << " \t";
            }
        }
        cout << endl;
    }

    return 0;
}