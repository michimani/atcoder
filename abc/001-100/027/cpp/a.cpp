#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<ui, ui> e;
  for (ui i = 0; i < 3; i++)
  {
    ui l;
    cin >> l;
    e[l]++;
  }

  ui ans = e.begin()->first;

  for (auto i : e)
    if (i.second == 1)
      ans = i.first;

  cout << ans << endl;
  return 0;
}