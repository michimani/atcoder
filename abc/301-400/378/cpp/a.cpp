#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<ui, ui> am;
  ui ans = 0;
  for (ui i = 0; i < 4; i++)
  {
    ui a;
    cin >> a;
    am[a]++;
    if (am[a] == 2)
    {
      ans++;
      am[a] = 0;
    }
  }

  cout << ans << endl;

  return 0;
}