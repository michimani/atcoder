#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui h, w;
    cin >> h >> w;
    string b(w, '#');

    cout << b << endl;

    for (ui i = 0; i < h - 2; i++) {
        cout << '#';
        for (ui j = 0; j < w - 2; j++) cout << '.';
        cout << '#' << endl;
    }

    cout << b << endl;

    return 0;
}