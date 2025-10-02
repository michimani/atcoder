#include <iostream>
#include <cmath>

using namespace std;
using ull = unsigned long long;

ull f(ull s)
{
  string ss = to_string(s);

  ull v = 0;
  for (ull i = 0; i < ss.length(); i++)
    v += ull(ss[i] - '0') * pow(10, i);

  return v;
}

int main()
{
  ull x, y;
  cin >> x >> y;

  ull z = 0;
  for (ull i = 0; i < 8; i++)
  {
    z = f(y + x);
    x = y;
    y = z;
  }

  cout << z << endl;

  return 0;
}