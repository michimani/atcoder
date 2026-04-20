#include <cmath>
#include <iostream>
#include <set>

using namespace std;
using ui = unsigned int;

bool ok(set<char> &v, string x) {
    for (auto &xx : x)
        if (!v.contains(xx)) return false;

    return true;
}

int main() {
    ui n, m;
    cin >> n >> m;
    set<char> s, t;
    char x = '_';
    for (ui i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }
    for (ui i = 0; i < m; i++) {
        cin >> x;
        t.insert(x);
    }
    ui q;
    cin >> q;

    string w;
    bool T = false, A = false;
    for (ui i = 0; i < q; i++) {
        cin >> w;
        T = ok(s, w);
        A = ok(t, w);

        if (T && !A)
            cout << "Takahashi" << endl;
        else if (!T && A)
            cout << "Aoki" << endl;
        else
            cout << "Unknown" << endl;
    }

    return 0;
}