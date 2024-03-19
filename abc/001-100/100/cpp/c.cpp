#include <iostream>
#include <deque>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  deque<ull> a;
  for (ui i = 0; i < n; i++)
  {
    ull aa;
    cin >> aa;
    if (aa % 2 == 0)
      a.push_back(aa);
  }

  ui ans = 0;
  while (a.size() > 0)
  {
    ull f = a.front();
    a.pop_front();
    f /= 2;

    for (auto &aa : a)
      aa *= 3;

    if (f % 2 == 0)
      a.push_back(f);

    ans++;
  }

  cout << ans << endl;
  return 0;
}