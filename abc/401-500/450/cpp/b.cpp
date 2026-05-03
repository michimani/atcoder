#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;
using ll = long long;

int main() {
    ui n;
    cin >> n;
    vector<vector<ui>> g(n, vector<ui>(n));

    for (ui i = 0; i < n; i++)
        for (ui j = i + 1; j < n; j++) cin >> g[i][j];

    for (ui a = 0; a < n; a++) {
        for (ui b = a + 1; b < n; b++) {
            for (ui c = b + 1; c < n; c++) {
                if (g[a][c] > g[a][b] + g[b][c]) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;

    return 0;
}