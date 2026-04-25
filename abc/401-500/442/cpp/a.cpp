#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    string s;
    cin >> s;

    ui d = 0;
    for (auto c : s) d += ui(c == 'i' || c == 'j');

    cout << d << endl;

    return 0;
}