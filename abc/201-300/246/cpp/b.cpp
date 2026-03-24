#include <cmath>
#include <iostream>

using namespace std;

int main() {
    float a, b;
    cin >> a >> b;

    float r = sqrt(a * a + b * b);
    cout << a / r << " " << b / r << endl;
    return 0;
}