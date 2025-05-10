#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<ui, ui> c;
  ui cc = 7;
  ui a;
  for (; cc--;)
  {
    cin >> a;
    c[a]++;
  }

  bool s = false, t = false;
  for (auto cv : c)
  {
    if (!t && cv.second >= 3)
      t = true;
    else if (!s && cv.second >= 2)
      s = true;
  }

  cout << (s && t ? "Yes" : "No") << endl;

  return 0;
}