#include <cmath>
#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (auto &c : s)
        if ('0' <= c && c <= '9') cout << c;

    cout << endl;

    return 0;
}