#include <iostream>
#include <map>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  map<int, bool> w;
  map<int, bool> l;
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;

    if (l.count(a) == 0)
    {
      w[a] = true;
    }
    if (w.count(b) > 0)
    {
      w.erase(b);
    }
    l[b] = true;
  }

  if (w.size() != 1)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << w.begin()->first << endl;
  }

  return 0;
}