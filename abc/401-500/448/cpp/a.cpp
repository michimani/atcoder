#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui n, x;
    cin >> n >> x;
    ui a = 0;
    for (ui i = 0; i < n; i++) {
        cin >> a;
        if (a < x) {
            x = a;
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}