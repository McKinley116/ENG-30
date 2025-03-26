#include <iostream>
#include <iomanip>
using namespace std;

// This program calculates the average speed for driving

// Function prototypes
double avg_speed(double s, double t);

int main()
{
    double s1, s2, t1, t2; // speed and time

    cout << fixed << setprecision(2); // sets output to 2 decimal places
    cout << "Please enter your first speed (m/s) and time(s): " << endl;
    cin >> s1 >> t1;
    cout << "Please enter your second speed (m/s) and time(s): " << endl;
    cin >> s2 >> t2;
    double totalTime = t1 + t2;
    double totalDistance = s1 + s2;
    cout << "Your average speed after driving " << s1 + s2 << " meters, is " << avg_speed(totalDistance, totalTime) << " m/s" << endl;

    return 0;
}

// Function
double avg_speed(double totalDistance, double totalTime)
{
    return totalDistance/totalTime;
}