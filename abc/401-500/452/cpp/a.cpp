#include <cmath>
#include <iostream>
#include <set>

using namespace std;

int main() {
    set<string> s = {"1-7", "3-3", "5-5", "7-7", "9-9"};
    string m, d;
    cin >> m >> d;
    cout << (s.contains(m + "-" + d) ? "Yes" : "No") << endl;

    return 0;
}