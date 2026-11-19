#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;
using ll = long long;

int main() {
    double x, y;
    cin >> x >> y;

    cout << (x * 9 / 16 == y ? "Yes" : "No") << endl;

    return 0;
}