#include <iomanip>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    double n;
    cin >> n;

    cout << fixed << setprecision(6) << (ui(n) / 2 + ui(n) % 2) / n << endl;
}