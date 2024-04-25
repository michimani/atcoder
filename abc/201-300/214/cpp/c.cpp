#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  vector<ull> s(n, 0);
  for (ui i = 0; i < n; i++)
    cin >> s[i];

  vector<ull> t(n, 1000000001);
  for (ui i = 0; i < n; i++)
  {
    ull tt;
    cin >> tt;

    t[i] = min(t[i], tt);
    t[(i + 1) % n] = min(t[(i + 1) % n], t[i] + s[i]);
  }

  for (ui i = 0; i < n; i++)
    t[(i + 1) % n] = min(t[(i + 1) % n], t[i] + s[i]);

  for (auto &tt : t)
    cout << tt << endl;

  return 0;
}