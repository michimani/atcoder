#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui w, b;
    cin >> w >> b;

    w *= 1000;

    ui n = 1;
    while (w >= b * n) n++;

    cout << n << endl;

    return 0;
}