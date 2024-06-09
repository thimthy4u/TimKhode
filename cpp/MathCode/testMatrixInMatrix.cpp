#include <iostream>

using namespace std;

int main() {
    double a[3][3];
    double d[3];
    double tempA[3][3];
    int i;

    // Input for matrix a
    cout << "Enter elements for 3x3 matrix a:" << endl;
    for (int j = 0; j < 3; ++j) {
        for (int k = 0; k < 3; ++k) {
            cout << "a[" << j << "][" << k << "]: ";
            cin >> a[j][k];
        }
    }

    // Input for array d
    cout << "Enter 3 elements for array d:" << endl;
    for (int j = 0; j < 3; ++j) {
        cout << "d[" << j << "]: ";
        cin >> d[j];
    }

    // Input for index i
    cout << "Enter the index i (0, 1, or 2): ";
    cin >> i;

    // Ensure i is within the valid range
    if (i < 0 || i > 2) {
        cout << "Invalid index! Please enter 0, 1, or 2." << endl;
        return 1;
    }

    // Fill tempA based on the index i
    for (int j = 0; j < 3; ++j) {
        for (int k = 0; k < 3; ++k) {
            tempA[j][k] = (k == i) ? d[j] : a[j][k];
        }
    }

    // Output the resulting tempA matrix
    cout << "Resulting tempA matrix:" << endl;
    for (int j = 0; j < 3; ++j) {
        for (int k = 0; k < 3; ++k) {
            cout << tempA[j][k] << " ";
        }
        cout << endl;
    }

    return 0;
}
