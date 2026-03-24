#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main() {
    vector<ui> abc(3, 0);
    for (auto& x : abc) cin >> x;

    sort(abc.begin(), abc.end());

    cout << abc[1] << endl;

    return 0;
}