#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

ui factorial(ui n)
{
  ui res = 1;
  while (n > 1)
  {
    res *= n;
    n--;
  }

  return res;
}

int main()
{
  vector<ui> coins(10, 0);
  for (ui c = 1; c <= 10; c++)
  {
    coins[10 - c] = factorial(c);
  }

  ui p;
  cin >> p;

  ui ans = 0;
  ui ci = 0;
  while (p > 0)
  {
    if (p / coins[ci] > 0)
    {
      ans += p / coins[ci];
      p = p % coins[ci];
    }

    ci++;
  }

  cout << ans << endl;
  return 0;
}