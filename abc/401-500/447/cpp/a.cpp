#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui n, m;
    cin >> n >> m;
    cout << (n >= (m * 2 - 1) ? "Yes" : "No") << endl;

    return 0;
}