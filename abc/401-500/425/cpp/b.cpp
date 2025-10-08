#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<int> a(n);
  vector<int> p(n);
  map<int, ui> ac;
  for (ui i = 1; i <= n; i++)
  {
    cin >> a[i - 1];
    p[i - 1] = i;
    if (a[i - 1] != -1)
    {
      ac[a[i - 1]]++;
      if (ac[a[i - 1]] > 1)
      {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
  ui pi = 0;
  for (ui i = 0; i < n; i++)
  {
    if (a[i] != -1)
    {
      cout << a[i];
    }
    else
    {
      while (ac[p[pi]] > 0)
        pi++;
      cout << p[pi];
      pi++;
    }

    if (i < n - 1)
      cout << " ";
  }

  cout << endl;

  return 0;
}