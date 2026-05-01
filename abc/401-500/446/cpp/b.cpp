#include <cmath>
#include <iostream>
#include <set>

using namespace std;
using ui = unsigned int;

int main() {
    ui n, m;
    cin >> n >> m;

    set<ui> M = {};
    for (ui i = 1; i <= m; i++) M.insert(i);

    ui l = 0, x = 0, a = 0;
    bool ok = false;
    for (ui i = 0; i < n; i++) {
        a = 0;
        ok = false;
        cin >> l;
        for (ui j = 0; j < l; j++) {
            cin >> x;
            if (!ok && M.contains(x)) {
                a = x;
                M.erase(x);
                ok = true;
            }
        }

        cout << a << endl;
    }

    return 0;
}