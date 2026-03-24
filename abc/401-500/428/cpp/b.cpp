#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<string, ui> tm = {};
    string t = "";
    ui mx = 0;
    for (ui i = 0; i <= n - k; i++) {
        t = "";
        for (ui l = 0; l < k; l++) t += s[i + l];
        tm[t]++;
        mx = max(mx, tm[t]);
    }

    vector<string> tl = {};
    for (auto m : tm)
        if (m.second == mx) tl.push_back(m.first);

    cout << mx << endl;
    sort(tl.begin(), tl.end());
    for (ui i = 0; i < tl.size(); i++) {
        if (i > 0) cout << " ";
        cout << tl[i];
    }
    cout << endl;

    return 0;
}