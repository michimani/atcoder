#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, q;
  cin >> n >> q;

  map<ui, map<ui, bool>> ff;
  ui t, a, b;
  for (; q--;)
  {
    cin >> t >> a >> b;
    if (t == 1)
      ff[a][b] = true;
    else if (t == 2)
      ff[a][b] = false;
    else if (t == 3)
      cout << (ff[a][b] && ff[b][a] ? "Yes" : "No") << endl;
  }

  return 0;
}