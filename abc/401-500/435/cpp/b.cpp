#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui n;
    cin >> n;
    vector<ui> a(n);
    for (auto &aa : a) cin >> aa;

    ui ans = 0;
    ui s = 0;
    bool ok = false;
    for (ui l = 0; l < n; l++) {
        for (ui r = l + 1; r < n; r++) {
            s = 0;
            for (ui h = l; h <= r; h++) s += a[h];

            ok = true;
            for (ui g = l; g <= r; g++) {
                if (s % a[g] == 0) {
                    ok = false;
                    break;
                }
            }

            ans += ui(ok);
        }
    }

    cout << ans << endl;

    return 0;
}