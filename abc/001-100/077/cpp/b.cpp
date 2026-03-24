#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui n;
    cin >> n;

    ui r = sqrt(n);
    cout << r * r << endl;

    return 0;
}