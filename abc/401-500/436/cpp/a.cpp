#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    ui n;
    string s;
    cin >> n >> s;

    for (ui i = 0; i < n - s.length(); i++) cout << 'o';

    cout << s << endl;

    return 0;
}