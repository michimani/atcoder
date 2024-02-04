#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  int x;
  cin >> n >> x;

  if (x == 0)
  {
    cout << "Yes" << endl;
    return 0;
  }

  map<int, bool> xm;
  for (ui i = 0; i < n; i++)
  {
    int a;
    cin >> a;

    if (xm.count(-(x - a)) > 0 || xm.count(x + a) > 0)
    {
      cout << "Yes" << endl;
      return 0;
    }

    xm[a] = true;
  }

  cout << "No" << endl;
  return 0;
}