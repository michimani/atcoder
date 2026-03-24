#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;
using ll = long long;

int main() {
    ui h, b;
    cin >> h >> b;

    cout << (h < b ? 0 : h - b) << endl;

    return 0;
}