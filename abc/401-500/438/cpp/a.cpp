#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui d, f;
    cin >> d >> f;

    while (f <= d) f += 7;

    cout << f - d << endl;

    return 0;
}