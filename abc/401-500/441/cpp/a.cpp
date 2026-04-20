#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui p, q, x, y;
    cin >> p >> q >> x >> y;

    cout << (p <= x && x <= p + 99 && q <= y && y <= q + 99 ? "Yes" : "No")
         << endl;

    return 0;
}