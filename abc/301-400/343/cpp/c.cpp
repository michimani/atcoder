#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

bool is_palindrome(string str)
{
  if (str.size() < 2)
    return true;

  ull mid = str.size() / 2;
  ull f = mid - 1, b = mid + str.size() % 2;
  ull i = 0, j = 1;
  while (i < j && i < mid)
  {
    j = str.size() - i - 1;

    if (str[i] != str[j] || str[f - i] != str[b + i])
      return false;

    i++;
  }

  return true;
}

int main()
{
  ull n;
  cin >> n;

  ull mx = 1000000;
  ull ans = 0;
  for (ull i = mx; i > 0; i--)
  {
    ull k = i * i * i;
    if (k <= n && is_palindrome(to_string(k)))
    {
      ans = k;
      break;
    }
  }

  cout << ans << endl;
  return 0;
}