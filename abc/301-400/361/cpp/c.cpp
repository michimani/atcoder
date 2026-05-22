#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui n, k;
    cin >> n >> k;

    vector<ui> a(n);
    for (auto &aa : a) cin >> aa;

    sort(a.rbegin(), a.rend());

    ui ans = a[0];
    for (ui i = 0; i <= k; i++) ans = min(ans, a[i] - a[i + n - k - 1]);

    cout << ans << endl;

    return 0;
}