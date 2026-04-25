#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui q;
    cin >> q;

    ui v = 0;
    bool p = false;
    ui a = 0;
    for (ui i = 0; i < q; i++) {
        cin >> a;
        switch (a) {
            case 1:
                v++;
                break;
            case 2:
                if (v > 0) v--;
                break;
            case 3:
                p = !p;
                break;
            default:
                // noop
        }

        cout << (p && v >= 3 ? "Yes" : "No") << endl;
    }

    return 0;
}