#include <iostream>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ull n, m;
  cin >> n >> m;

  const ull LIM = 1000000000;

  ull x = 0;
  ull nn = 0;
  for (ui i = 0; i <= m; i++)
  {
    if (double(nn) > double(LIM - x) / double(n))
    {
      cout << "inf" << endl;
      return 0;
    }
    nn = max(ull(1), nn * n);
    x += nn;
  }

  cout << (x > LIM ? "inf" : to_string(x)) << endl;

  return 0;
}