#include <iostream>
#include <string>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui h, w;
    cin >> h >> w;
    vector<string> g(h);
    for (auto &gg : g) cin >> gg;

    ui ans = 0;
    for (ui h1 = 0; h1 < h; h1++)
        for (ui h2 = h1; h2 < h; h2++)
            for (ui w1 = 0; w1 < w; w1++)
                for (ui w2 = w1; w2 < w; w2++) {
                    bool ok = true;
                    for (ui i = h1; i <= h2 && ok; i++)
                        for (ui j = w1; j <= w2 && ok; j++)
                            if (g[i][j] != g[h1 + h2 - i][w1 + w2 - j])
                                ok = false;
                    if (ok) ans++;
                }

    cout << ans << endl;

    return 0;
}