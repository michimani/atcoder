#include <cmath>
#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main() {
    ui n, m;
    cin >> n >> m;
    map<ui, int> b = {}, a = {};
    ui A = 0, B = 0;
    for (ui i = 0; i < n; i++) {
        cin >> A >> B;
        b[A]++;
        a[B]++;
    }

    for (ui i = 1; i <= m; i++) cout << a[i] - b[i] << endl;

    return 0;
}