#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = max(a + b, max(a - b, a * b));
    cout << ans << endl;
    return 0;
}