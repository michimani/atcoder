#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ull n;
  cin >> n;

  ull ans = 1;
  for (ui i = 0; i < n; i++)
  {
    ans *= 2;
  }

  cout << ans << endl;
  return 0;
}