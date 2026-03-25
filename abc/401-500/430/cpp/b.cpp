#include <cmath>
#include <iostream>
#include <set>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui n, m;
    cin >> n >> m;

    vector<vector<char>> s(n, vector<char>(n));
    for (auto &sn : s)
        for (auto &snn : sn) cin >> snn;

    set<string> a = {};
    string as = "";
    for (ui si = 0; si <= n - m; si++) {
        for (ui sj = 0; sj <= n - m; sj++) {
            as = "";
            for (ui i = 0; i < m; i++)
                for (ui j = 0; j < m; j++) as += s[si + i][sj + j];
            a.insert(as);
        }
    }

    cout << a.size() << endl;

    return 0;
}