#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui n;
    cin >> n;
    vector<pair<ui, string>> s(n);
    ui mx = 0;
    for (auto &ss : s) {
        cin >> ss.second;
        ss.first = ss.second.length();
        mx = max(mx, ss.first);
    }

    string d = "";
    for (auto &ss : s) {
        d = "";
        for (ui i = 0; i < (mx - ss.first) / 2; i++) d += '.';

        cout << d << ss.second << d << endl;
    }

    return 0;
}