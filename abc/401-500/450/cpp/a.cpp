#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui n;
    cin >> n;
    while (n > 1) {
        cout << n << ',';
        n--;
    }

    cout << n << endl;

    return 0;
}