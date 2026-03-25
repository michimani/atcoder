#include <iostream>
#include <map>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui x, n;
    cin >> x >> n;

    vector<ui> w(n);
    for (auto &ww : w) cin >> ww;

    ui q;
    cin >> q;
    ui p = 0;
    map<ui, bool> xp = {};
    for (ui i = 0; i < q; i++) {
        cin >> p;
        if (xp[p])
            x -= w[p - 1];
        else
            x += w[p - 1];

        cout << x << endl;

        xp[p] = !xp[p];
    }

    return 0;
}