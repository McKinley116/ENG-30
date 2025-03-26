#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Functions prototypes
double solveSeries(int N);

int main ()
{
    int N1 = 100;
    int N2 = 200;

    cout << fixed << setprecision(3);
    cout << solveSeries(N1) << endl;
    cout << solveSeries(N2) << endl;

    return 0; 
}

//Functions
double solveSeries(int N)
{
    double sum;
    for (int n = 0; n <= N; n++)
    {
        sum += 4 * (pow(-1, n)) / (2 * n + 1);
    }
        return sum; 
}
