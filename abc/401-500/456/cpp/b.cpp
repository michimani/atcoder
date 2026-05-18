#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    vector<int> a(6), b(6), c(6);
    for (auto &aa : a) cin >> aa;
    for (auto &bb : b) cin >> bb;
    for (auto &cc : c) cin >> cc;

    double cnt = 0;
    set<int> s = {};
    set<int> ss = {4, 5, 6};
    for (auto &aa : a)
        for (auto &bb : b)
            for (auto &cc : c) {
                s = {aa, bb, cc};
                cnt += double(s == ss);
            }

    cout << fixed << setprecision(7) << cnt / double(6 * 6 * 6) << endl;

    return 0;
}