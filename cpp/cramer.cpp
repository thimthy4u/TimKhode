#include <iostream>
using namespace std;

int main() {
    
    // Declare arrays for coefficients and constants
    double a[3][3];
    double d[3];

    // Input coefficients and constants
    cout << "Enter coefficients a1, b1, c1, and constant d1: ";
    cin >> a[0][0] >> a[0][1] >> a[0][2] >> d[0];

    cout << "Enter coefficients a2, b2, c2, and constant d2: ";
    cin >> a[1][0] >> a[1][1] >> a[1][2] >> d[1];

    cout << "Enter coefficients a3, b3, c3, and constant d3: ";
    cin >> a[2][0] >> a[2][1] >> a[2][2] >> d[2];

    // Calculate the determinant of the coefficient matrix
    double detA = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
                - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
                + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

    // Check if determinant is zero
    if (detA == 0) {
        cout << "The system of equations has no unique solution." << endl;
        return 1;
    }

    // Variables to store determinants for x, y, and z
    double detAx = 0, detAy = 0, detAz = 0;

    // Calculate determinants for x, y, z
    for (int i = 0; i < 3; ++i) {
        double tempA[3][3];
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                if(i == 0)
                    tempA[j][k] = (k == 0) ? d[j] : a[j][k];
                else if (i == 1)
                    tempA[j][k] = (k == 1) ? d[j] : a[j][k];
                else
                    tempA[j][k] = (k == 2) ? d[j] : a[j][k];
            }
        }

        double detTempA = tempA[0][0] * (tempA[1][1] * tempA[2][2] - tempA[1][2] * tempA[2][1])
                        - tempA[0][1] * (tempA[1][0] * tempA[2][2] - tempA[1][2] * tempA[2][0])
                        + tempA[0][2] * (tempA[1][0] * tempA[2][1] - tempA[1][1] * tempA[2][0]);

        if (i == 0)
            detAx = detTempA;
        else if (i == 1)
            detAy = detTempA;
        else
            detAz = detTempA;
    }

    // Calculate x, y, z
    double x = detAx / detA;
    double y = detAy / detA;
    double z = detAz / detA;

    // Output the results
    cout << "The values are: " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}
//https://matrix.reshish.com/cramer.php
