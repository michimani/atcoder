#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main() {
    string s;
    cin >> s;

    ui mx = 0;
    map<char, ui> cm = {};
    for (auto &c : s) {
        cm[c]++;
        mx = max(mx, cm[c]);
    }

    for (auto &c : s)
        if (cm[c] != mx) cout << c;

    cout << endl;

    return 0;
}