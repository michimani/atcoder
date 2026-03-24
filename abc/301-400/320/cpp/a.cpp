#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui a, b;
    cin >> a >> b;

    cout << ui(pow(a, b) + pow(b, a)) << endl;

    return 0;
}