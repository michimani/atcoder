#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;
using ll = long long;

int main() {
    ui n;
    char x;
    cin >> n >> x;
    int xi = x - 'A';

    string s;
    for (ui i = 0; i < n; i++) {
        cin >> s;
        if (s[xi] == 'o') {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}