#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double h;
    cin >> h;

    cout << fixed << setprecision(7) << sqrt(h * (h + 12800000)) << endl;

    return 0;
}