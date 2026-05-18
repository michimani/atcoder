#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    for (int a = 1; a <= 6; a++)
        for (int b = 1; b <= 6; b++)
            for (int c = 1; c <= 6; c++)
                if (a + b + c == x) {
                    cout << "Yes" << endl;
                    return 0;
                }

    cout << "No" << endl;

    return 0;
}