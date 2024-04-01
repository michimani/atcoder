#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  map<ui, ui> a;
  for (ui i = 0; i < n; i++)
  {
    ui aa;
    cin >> aa;
    a[aa]++;
  }

  vector<ui> b(n, 0);
  for (auto &bb : b)
    cin >> bb;

  ull ans = 0;
  for (; n--;)
  {
    ull c;
    cin >> c;
    ans += ull(a[b[c - 1]]);
  }

  cout << ans << endl;
  return 0;
}