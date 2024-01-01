#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, x;
  cin >> n >> x;

  vector<bool> f(n, false);
  f[x - 1] = true;

  map<ui, ui> ff;
  for (ui i = 0; i < n; i++)
  {
    cin >> ff[i + 1];
  }

  ui ans = 1;
  while (true)
  {
    if (f[ff[x] - 1])
    {
      break;
    }

    f[ff[x] - 1] = true;
    ans++;
    x = ff[x];
  }

  cout << ans << endl;
  return 0;
}