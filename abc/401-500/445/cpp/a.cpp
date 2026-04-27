#include <cmath>
#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    cout << (s[0] == s[s.length() - 1] ? "Yes" : "No") << endl;

    return 0;
}