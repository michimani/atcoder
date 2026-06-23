#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui n;
    cin >> n;
    map<ui, vector<ui>> m;
    ui k = 0, b = 0;
    for (ui i = 0; i < n; i++) {
        cin >> k;
        for (ui j = 0; j < k; j++) {
            cin >> b;
            m[b].push_back(i + 1);
        }
    }

    for (ui i = 0; i < n; i++) {
        cout << m[i + 1].size();
        for (auto &v : m[i + 1]) cout << " " << v;
        cout << endl;
    }

    return 0;
}