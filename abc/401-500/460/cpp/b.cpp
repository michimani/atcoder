#include <iostream>

using namespace std;
using ui = unsigned long;
using ll = long long;

bool ok(ll x1, ll y1, ll r1, ll x2, ll y2, ll r2) {
    ll dx = x1 - x2, dy = y1 - y2;
    ll d2 = dx * dx + dy * dy;
    ll rsum = r1 + r2, rdiff = r1 - r2;
    return rdiff * rdiff <= d2 && d2 <= rsum * rsum;
}

int main() {
    ui t;
    cin >> t;
    ll x1, y1, r1, x2, y2, r2;
    for (ui i = 0; i < t; i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        cout << (ok(x1, y1, r1, x2, y2, r2) ? "Yes" : "No") << endl;
    }

    return 0;
}