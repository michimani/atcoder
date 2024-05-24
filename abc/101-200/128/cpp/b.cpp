#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<string, map<ui, ui>> spi;
  for (ui i = 1; i <= n; i++)
  {
    string s;
    ui p;
    cin >> s >> p;

    spi[s][p] = i;
  }

  for (auto si : spi)
  {
    auto pi = si.second.rbegin();
    while (pi != si.second.rend())
    {
      cout << pi->second << endl;
      pi++;
    }
  }

  return 0;
}