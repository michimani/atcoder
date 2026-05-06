#include <cmath>
#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    cout << (s.length() % 5 == 0 ? "Yes" : "No") << endl;

    return 0;
}