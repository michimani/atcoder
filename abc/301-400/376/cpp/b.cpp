#include <algorithm>
#include <iostream>

using namespace std;

int move_cost(int from, int to, int other, int n) {
    if (from == to) return 0;

    int cw = (to - from + n) % n;
    int ccw = (from - to + n) % n;
    bool cw_blocked = (other - from + n) % n < cw;
    bool ccw_blocked = (from - other + n) % n < ccw;

    if (cw_blocked) return ccw;
    if (ccw_blocked) return cw;

    return min(cw, ccw);
}

int main() {
    int n, q;
    cin >> n >> q;
    int l = 1, r = 2;
    int s = 0;

    char h = '.';
    int t = 0;
    for (int i = 0; i < q; i++) {
        cin >> h >> t;

        switch (h) {
            case 'L':
                s += move_cost(l, t, r, n);
                l = t;
                break;
            case 'R':
                s += move_cost(r, t, l, n);
                r = t;
                break;
            default:
                // noop
        }
    }

    cout << s << endl;

    return 0;
}