#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

ui mod(int a, ui n) { return ui(((a % int(n)) + int(n)) % int(n)); }

int main() {
    ui n;
    cin >> n;

    vector<vector<int>> g(n, vector<int>(n, -1));

    ui r = 0, c = (n - 1) / 2;
    int k = 1;
    g[0][c] = k;
    for (ui i = 0; i < (n * n) - 1; i++) {
        if (g[mod(int(r) - 1, n)][mod(int(c) + 1, n)] == -1) {
            r = mod(int(r) - 1, n);
            c = mod(int(c) + 1, n);
        } else {
            r = mod(int(r) + 1, n);
        }
        k = k + 1;

        g[r][c] = k;
    }

    for (ui i = 0; i < n; i++) {
        for (ui j = 0; j < n; j++) {
            if (j > 0 && j < n) cout << " ";
            cout << g[i][j];
        }
        cout << endl;
    }

    return 0;
}