#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui n, m;
    cin >> n >> m;
    vector<ui> c(m);
    for (auto &cc : c) cin >> cc;

    ui s = 0;
    ui a = 0, b = 0;
    for (ui i = 0; i < n; i++) {
        cin >> a >> b;
        if (c[a - 1] == 0) continue;

        if (c[a - 1] >= b) {
            s += b;
            c[a - 1] -= b;
        } else {
            s += c[a - 1];
            c[a - 1] = 0;
        }
    }

    cout << s << endl;

    return 0;
}