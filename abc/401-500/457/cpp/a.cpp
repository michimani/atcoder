#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui n;
    cin >> n;
    vector<ui> a(n);
    for (auto &aa : a) cin >> aa;

    ui x;
    cin >> x;

    cout << a[x - 1] << endl;

    return 0;
}