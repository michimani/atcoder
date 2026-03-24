#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui x;
    cin >> x;

    cout << ui(sqrt(sqrt(x))) << endl;
    return 0;
}