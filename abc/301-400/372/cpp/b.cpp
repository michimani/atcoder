#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  int m;
  cin >> m;

  vector<int> a;
  int ex = 10;
  while (m > 0)
  {
    int p = pow(3, ex);
    if (p <= m)
    {
      m -= p;
      a.push_back(ex);
      continue;
    }

    ex--;
  }

  cout << a.size() << endl;
  for (ui i = 0; i < a.size(); i++)
  {
    if (i > 0)
      cout << " ";

    cout << a[i];
  }
  cout << endl;

  return 0;
}