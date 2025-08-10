#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  map<ui, ui> ac;
  vector<ui> a(n);
  for (auto &aa : a)
  {
    cin >> aa;
    ac[aa]++;
  }

  map<ui, ui> dc;
  ui b;
  for (; m--;)
  {
    cin >> b;
    if (ac[b] > 0)
    {
      ac[b]--;
      dc[b]++;
    }
  }

  string ans = "";
  for (auto aa : a)
  {
    if (dc[aa] > 0)
    {
      dc[aa]--;
      continue;
    }
    ans += to_string(aa) + " ";
  }

  if (ans.length() > 0)
    ans.pop_back();

  cout << ans << endl;

  return 0;
}