#include <iostream>
#include <algorithm>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

ull f(ull x)
{
  string xs = to_string(x);
  sort(xs.begin(), xs.end());

  ui L = ui(xs.length());
  ull g1 = 0, g2 = 0;
  ull d = 1;
  for (ui i = 0; i < L; i++)
  {
    g1 += ull(xs[i] - '0') * d;
    g2 += ull(xs[L - 1 - i] - '0') * d;
    d *= 10;
  }

  return g1 - g2;
}

int main()
{
  ull n, k;
  cin >> n >> k;

  ull a = n;
  for (ui i = 0; i < k; i++)
    a = f(a);

  cout << a << endl;
  return 0;
}