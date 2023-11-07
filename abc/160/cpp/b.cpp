#include <iostream>

using namespace std;

int main()
{
  int x = 0;
  cin >> x;

  int ans = 0;
  ans += (x / 500) * 1000;
  ans += (x % 500 / 5) * 5;

  cout << ans << endl;
}