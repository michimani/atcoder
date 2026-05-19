#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui h, w;
    cin >> h >> w;

    vector<char> tr(w + 2, '.');
    tr[0] = '#';
    tr[w + 1] = '#';
    vector<char> th(w + 2, '#');
    vector<vector<char>> g(h + 2);

    for (auto &gg : g) gg = tr;

    g[0] = th;
    g[h + 1] = th;

    ui c = 0;
    for (ui i = 1; i <= h; i++) {
        c = 0;
        for (ui j = 1; j <= w; j++) {
            c = ui(g[i][j - 1] == '.') + ui(g[i][j + 1] == '.') +
                ui(g[i - 1][j] == '.') + ui(g[i + 1][j] == '.');
            cout << c << " ";
        }
        cout << endl;
        ;
    }

    return 0;
}