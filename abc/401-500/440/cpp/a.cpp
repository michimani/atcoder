#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui x, y;
    cin >> x >> y;

    cout << x * ui(pow(2, y)) << endl;

    return 0;
}