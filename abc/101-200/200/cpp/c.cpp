#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

ull nc2(ull n)
{
  if (n < 2)
    return 0;
  return n * (n - 1) / 2;
};

int main()
{
  ui n;
  cin >> n;

  vector<int> a(n, 0);
  map<int, ui> am;
  for (ui i = 0; i < n; i++)
  {
    cin >> a[i];
    a[i] %= 200;
    am[a[i]]++;
  }

  ull ans = 0;
  for (auto &i : am)
    ans += nc2(ull(i.second));

  cout << ans << endl;
  return 0;
}