#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    vector<ui> abc(3);
    for (auto &x : abc) cin >> x;

    sort(abc.rbegin(), abc.rend());

    for (auto x : abc) cout << x;
    cout << endl;

    return 0;
}