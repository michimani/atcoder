#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>
#include <numbers>

using namespace std;

int main() {
    double d;
    cin >> d;

    cout << fixed << setprecision(7) << pow(d / 2, 2) * numbers::pi << endl;

    return 0;
}