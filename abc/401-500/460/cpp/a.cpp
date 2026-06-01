#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui n, m;
    cin >> n >> m;
    ui x = n % m;
    ui ans = 1;
    m = x;
    while (m > 0) {
        x = n % m;
        m = x;
        ans++;
    }

    cout << ans << endl;

    return 0;
}