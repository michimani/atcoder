#include <iostream>
#include <algorithm>

using namespace std;
using ui = unsigned int;

string to_bin(ui n)
{
  string res = "";
  while (n != 0)
  {
    res = (n % 2 == 0 ? "0" : "1") + res;
    n /= 2;
  }
  return res.empty() ? "0" : res;
}

int main()
{
  ui n;
  cin >> n;

  string b = to_bin(n);

  ui ans = 0;
  reverse(b.begin(), b.end());
  for (auto bi : b)
  {
    if (bi == '0')
    {
      ans++;
    }
    else
    {
      break;
    }
  }

  cout << ans << endl;
  return 0;
}