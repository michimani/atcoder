#include <cmath>
#include <iostream>
#include <string>

using namespace std;
using ui = unsigned int;

ui f(ui t) {
    ui s = 0;
    string ts = to_string(t);
    for (auto c : ts) s += ui(c - 48);
    return s;
}

int main() {
    ui n;
    cin >> n;

    ui a = 1;
    for (ui i = 1; i < n; i++) a += f(a);
    cout << a << endl;

    return 0;
}
