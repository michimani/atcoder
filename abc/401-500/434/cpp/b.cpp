#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main() {
    ui n, m;
    cin >> n >> m;

    map<ui, float> ab = {};
    map<ui, float> ac = {};
    ui a = 0;
    float b = 0.0;
    for (ui i = 0; i < n; i++) {
        cin >> a >> b;
        ab[a] += b;
        ac[a]++;
    }

    for (auto c : ab)
        cout << fixed << setprecision(6) << c.second / ac[c.first] << endl;

    return 0;
}