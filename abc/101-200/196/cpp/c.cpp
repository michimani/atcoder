#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ull n;
  cin >> n;

  ui ans = 0;
  for (ull i = 1; i <= n; i++)
  {
    ull l = to_string(i).length();
    ull nn = i * pow(10, l) + i;
    if (nn > n)
      break;
    ans++;
  }

  cout << ans << endl;
  return 0;
}