#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui x;
    cin >> x;
    string h = "HelloWorld";

    for (ui i = 0; i < 10; i++) {
        if (i == x - 1) continue;

        cout << h[i];
    }

    cout << endl;

    return 0;
}