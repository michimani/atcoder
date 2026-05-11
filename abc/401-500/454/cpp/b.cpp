#include <cmath>
#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main() {
    ui n, m;
    cin >> n >> m;

    map<ui, ui> mm = {};
    ui f = 0;
    for (ui i = 0; i < n; i++) {
        cin >> f;
        mm[f]++;
    }

    cout << (mm.size() == n ? "Yes" : "No") << endl;
    cout << (mm.size() == m ? "Yes" : "No") << endl;

    return 0;
}