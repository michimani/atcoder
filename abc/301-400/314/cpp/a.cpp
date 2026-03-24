#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    string pi_d =
        "14159265358979323846264338327950288419716939937510582097494459"
        "23078164062862089986280348253421170679";

    ui n;
    cin >> n;

    cout << "3.";
    for (ui i = 0; i < n; i++) {
        cout << pi_d[i];
    }
    cout << endl;

    return 0;
}