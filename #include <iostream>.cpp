#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    const double K = 0.25;
    const int SIZE_Y = 20;  // Y-axis increments (0.05 step size to 1)
    const int SIZE_X = 51;  // X-axis increments (0.02 step size to 1)

    double mech_pow[SIZE_Y] = {};  // Stores computed P values
    double x_values[SIZE_Y] = {};  // Stores corresponding u values

    // Compute P values for given u values
    int index = 0;
    for (double u = 0, x = 0; u <= 1.0 && index < SIZE_Y; u += 0.05, x += 0.02) {
        mech_pow[index] = (K * u * (1 - u)) / (K + u);
        x_values[index] = x;
        index++;
    }

    // Print header row with u values
    cout << setw(6) << "P  ";
    for (double x = 0; x <= 1.0; x += 0.02) {
        cout << setw(5) << fixed << setprecision(2) << x;
    }
    cout << "  u\n";

    // Print P values and corresponding points (*)
    for (int i = 0; i < SIZE_Y; i++) {
        cout << setw(6) << fixed << setprecision(2) << mech_pow[i];  // Print P value
        
        for (int j = 0; j < SIZE_X; j++) {
            if (abs(x_values[i] - (j * 0.02)) < 0.01) {
                cout << setw(5) << "*";  // Print *
            } else {
                cout << setw(5) << " ";  // Print space for alignment
            }
        }
        cout << endl;
    }

    return 0;
}
