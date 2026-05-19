#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    string s;
    cin >> s;
    ui n;
    cin >> n;

    for (ui i = n; i < s.length() - n; i++) cout << s[i];

    cout << endl;

    return 0;
}