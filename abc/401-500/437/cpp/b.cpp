#include <cmath>
#include <iostream>
#include <set>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui h, w, n;
    cin >> h >> w >> n;

    vector<vector<ui>> g(h, vector<ui>(w));
    for (auto &hh : g)
        for (auto &gg : hh) cin >> gg;

    set<ui> b = {};
    ui bb = 0;
    for (ui i = 0; i < n; i++) {
        cin >> bb;
        b.insert(bb);
    }

    ui mx = 0;
    ui t = 0;
    for (auto hh : g) {
        t = 0;
        for (auto gg : hh) t += ui(b.contains(gg));

        mx = max(mx, t);
    }

    cout << mx << endl;

    return 0;
}