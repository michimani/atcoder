#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, bool> called;
  for (ui i = 1; i <= n; i++)
  {
    ui a;
    cin >> a;

    if (called.count(i) == 0)
      called[a] = true;
  }

  string ans = "";
  ui ans_c = 0;
  for (ui i = 1; i <= n; i++)
  {
    if (called.count(i) == 0)
    {
      ans += to_string(i) + " ";
      ans_c++;
    }
  }

  if (ans.length() > 0)
    ans.pop_back();

  cout << ans_c << endl;
  cout << ans << endl;

  return 0;
}