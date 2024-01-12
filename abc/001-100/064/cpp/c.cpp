#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, bool> rc;
  ui any = 0;
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;

    ui r = a / 400;
    if (r < 8)
    {
      rc[r] = true;
    }
    else
    {
      any++;
    }
  }

  ui mn = rc.size() > 0 ? ui(rc.size()) : 1;
  ui mx = ui(rc.size()) + any;

  cout << mn << " " << mx << endl;
  return 0;
}