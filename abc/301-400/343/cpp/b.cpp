#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  for (ui i = 0; i < n; i++)
  {
    string ans = "";
    for (ui j = 0; j < n; j++)
    {
      ui a;
      cin >> a;
      if (a == 1)
        ans += to_string(j + 1) + " ";
    }

    if (ans.length() == 0)
    {
      cout << endl;
      continue;
    }

    ans.pop_back();
    cout << ans << endl;
  }

  return 0;
}