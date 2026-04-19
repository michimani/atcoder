#include <cmath>
#include <iostream>
#include <string>

using namespace std;
using ui = unsigned int;

bool is_happy(string n) {
    ui s = 0;
    while (n.length() > 1) {
        s = 0;
        for (auto nn : n) s += ui(pow(ui(nn) - 48, 2));
        n = to_string(s);
    }

    return n == "1" || n == "7";
}

int main() {
    string n;
    cin >> n;

    cout << (is_happy(n) ? "Yes" : "No") << endl;

    return 0;
}
