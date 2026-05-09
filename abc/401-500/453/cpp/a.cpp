#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui n;
    cin >> n;
    bool s = true;
    char c = '.';
    for (ui i = 0; i < n; i++) {
        cin >> c;
        if (s && c != 'o') s = false;

        if (!s) cout << c;
    }
    cout << endl;

    return 0;
}