#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui h, w, q;
    cin >> h >> w >> q;
    ui x = 0, y = 0;
    for (ui i = 0; i < q; i++) {
        cin >> x >> y;
        switch (x) {
            case 1:
                cout << y * w << endl;
                h -= y;
                break;
            case 2:
                cout << h * y << endl;
                w -= y;
                break;
            default:
                // noop
        }
    }

    return 0;
}