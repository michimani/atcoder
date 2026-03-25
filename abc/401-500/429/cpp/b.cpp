#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui n, m;
    cin >> n >> m;

    vector<ui> a(n);
    ui sum = 0;
    for (auto &aa : a) {
        cin >> aa;
        sum += aa;
    }

    for (ui i = 0; i < n; i++) {
        if (m == sum - a[i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}