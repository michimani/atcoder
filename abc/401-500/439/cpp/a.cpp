#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui n;
    cin >> n;

    cout << pow(2, n) - 2 * n << endl;

    return 0;
}