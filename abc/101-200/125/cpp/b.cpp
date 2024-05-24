#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> v(n, 0);
  for (auto &vv : v)
    cin >> vv;

  ui ans = 0;
  for (ui i = 0; i < n; i++)
  {
    ui c;
    cin >> c;
    if (c < v[i])
      ans += (v[i] - c);
  }

  cout << ans << endl;

  return 0;
}