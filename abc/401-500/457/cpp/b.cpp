#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui n;
    cin >> n;
    ui l = 0;
    vector<vector<ui>> a(n);
    for (auto &ll : a) {
        cin >> l;
        ll = vector<ui>(l);
        for (auto &lll : ll) cin >> lll;
    }

    ui x, y;
    cin >> x >> y;
    cout << a[x - 1][y - 1] << endl;

    return 0;
}