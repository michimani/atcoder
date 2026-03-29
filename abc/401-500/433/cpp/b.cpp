#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui n;
    cin >> n;
    vector<ui> a(n);
    for (auto &aa : a) cin >> aa;

    cout << -1 << endl;
    bool y = false;
    for (ui i = 1; i < n; i++) {
        y = false;
        for (ui j = 1; j <= i; j++) {
            if (a[i] < a[i - j]) {
                cout << i - j + 1 << endl;
                y = true;
                break;
            }
        }

        if (!y) cout << -1 << endl;
    }

    return 0;
}