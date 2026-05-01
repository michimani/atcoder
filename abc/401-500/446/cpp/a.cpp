#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    string s;
    cin >> s;
    s[0] = char(ui(s[0] + 32));
    cout << "Of" << s << endl;

    return 0;
}