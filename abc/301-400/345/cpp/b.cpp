#include <iostream>
#include <algorithm>

using namespace std;
using ui = unsigned int;
using ll = long long;

int main()
{
  ll x;
  cin >> x;

  if (abs(x) < 10)
  {
    cout << (x > 0 ? 1 : 0) << endl;
    return 0;
  }

  string sx = to_string(x);
  ll d = sx[sx.length() - 1] - '0';

  sx.pop_back();
  if (x < 0 || d == 0)
  {
    cout << sx << endl;
    return 0;
  }

  reverse(sx.begin(), sx.end());
  int add = 1;
  for (ui i = 0; i < sx.length(); i++)
  {
    int dg = sx[i] - '0';
    dg += add;
    if (dg > 9)
    {
      add = 1;
      dg = 0;
    }
    else
    {
      add = 0;
    }

    sx[i] = char(dg + '0');
  }

  if (add == 1)
    sx.push_back('1');

  reverse(sx.begin(), sx.end());

  cout << sx << endl;
  return 0;
}