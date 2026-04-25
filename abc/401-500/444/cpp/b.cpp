#include <cmath>
#include <iostream>
#include <string>

using namespace std;
using ui = unsigned int;

ui s(ui n) {
    string ns = to_string(n);
    ui s = 0;
    for (auto c : ns) s += ui(c) - 48;

    return s;
}

int main() {
    ui n, k;
    cin >> n >> k;
    ui a = 0;
    for (ui i = 1; i <= n; i++) a += ui(s(i) == k);

    cout << a << endl;

    return 0;
}