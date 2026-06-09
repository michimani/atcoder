#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    ui n;
    cin >> n;

    vector<ui> a(n), b(n);
    ui aa = 0, bb = 0;
    for (ui i = 0; i < n; i++) {
        cin >> aa;
        a[aa - 1] = i;
    }

    ui ans = 0;
    for (ui i = 0; i < n; i++) {
        cin >> bb;
        ans += ui(a[i] == bb - 1);
    }

    cout << (ans == n ? "Yes" : "No") << endl;

    return 0;
}