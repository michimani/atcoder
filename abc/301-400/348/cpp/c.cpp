#include <iostream>
#include <map>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, ui> cam;
  for (; n--;)
  {
    ui a, c;
    cin >> a >> c;

    if (cam.count(c) == 0)
      cam[c] = a;
    else
      cam[c] = min(cam[c], a);
  }

  ui mx = 0;
  for (auto c : cam)
    mx = max(mx, c.second);

  cout << mx << endl;
  return 0;
}