#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui n, k;
    cin >> n >> k;

    ui a = 0;
    ui t = n;
    while (t < k) {
        a++;
        n++;
        t += n;
    }

    cout << a << endl;

    return 0;
}