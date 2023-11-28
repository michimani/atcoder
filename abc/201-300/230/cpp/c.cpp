#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
  long long n, a, b, p, q, r, s;
  cin >> n >> a >> b >> p >> q >> r >> s;

  vector<string> grid((unsigned long long)(q - p + 1), string((unsigned long long)(s - r + 1), '.'));
  for (long long k1 = p - a; k1 <= q - a; k1++)
  {
    if (r <= b + k1 && b + k1 <= s)
    {
      grid[(unsigned long long)(a + k1 - p)][(unsigned long long)(b + k1 - r)] = '#';
    }
  }

  for (long long k2 = p - a; k2 <= q - a; k2++)
  {
    if (r <= b - k2 && b - k2 <= s)
    {
      grid[(unsigned long long)(a + k2 - p)][(unsigned long long)(b - k2 - r)] = '#';
    }
  }

  for (auto &row : grid)
  {
    cout << row << endl;
  }

  return 0;
}