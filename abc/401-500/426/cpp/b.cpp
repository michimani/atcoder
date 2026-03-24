#include <cmath>
#include <iostream>
#include <map>

using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, int> cm = {};
    for (auto c : s) cm[c]++;
    for (auto m : cm) {
        if (m.second == 1) {
            cout << m.first << endl;
            return 0;
        }
    }

    return 0;
}