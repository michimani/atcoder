#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui x, y, z;
    cin >> x >> y >> z;

    while (x >= y * z) {
        if (x == y * z) {
            cout << "Yes" << endl;
            return 0;
        }
        x++;
        y++;
    }

    cout << "No" << endl;

    return 0;
}