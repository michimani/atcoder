#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;
using ui = unsigned int;

int main() {
    string x;
    cin >> x;

    sort(x.begin(), x.end());

    ui nzidx = 0;
    for (auto xx : x)
        if (xx == '0') nzidx++;

    swap(x[0], x[nzidx]);

    cout << x << endl;

    return 0;
}