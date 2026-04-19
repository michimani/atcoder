#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui n;
    cin >> n;
    vector<pair<ui, ui>> t(n);
    for (ui i = 0; i < n; i++) {
        cin >> t[i].second;
        t[i].first = i;
    }

    sort(t.begin(), t.end(), [](const pair<ui, ui>& a, const pair<ui, ui>& b) {
        return a.second < b.second;
    });

    for (ui i = 0; i < 3; i++) cout << t[i].first + 1 << " ";

    cout << endl;

    return 0;
}