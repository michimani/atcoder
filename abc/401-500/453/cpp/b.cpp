#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int t, x;
    cin >> t >> x;
    int a = 0, c = 0;
    cin >> a;
    cout << 0 << " " << a << endl;
    c = a;
    for (int i = 1; i <= t; i++) {
        cin >> a;
        if (abs(a - c) >= x) {
            cout << i << " " << a << endl;
            c = a;
        }
    }

    return 0;
}