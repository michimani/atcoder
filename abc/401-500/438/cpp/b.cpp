#include <cmath>
#include <iostream>
#include <string>

using namespace std;
using ui = unsigned int;

int main() {
    ui n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    int ans = m * 9;
    int tmp = 0;
    int d = 0;
    for (ui i = 0; i <= n - m; i++) {
        tmp = 0;
        for (ui j = 0; j < m; j++) {
            d = s[i + j] - t[j];
            if (d < 0) d += 10;
            tmp += d;
        }

        ans = min(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}