#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<ui, ui> m;
  ui x;
  for (ui i = 0; i < 4; i++)
  {
    cin >> x;
    m[x]++;
  }

  cout << (m.size() == 2 ? "Yes" : "No") << endl;

  return 0;
}