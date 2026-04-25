#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    string n;
    cin >> n;
    char c = n[0];
    for (ui i = 1; i < n.length(); i++) {
        if (c != n[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}