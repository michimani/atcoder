#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> dc;

  ui d = 0;
  for (ui i = 0; i < n; i++)
  {
    char c;
    cin >> c;

    if (c == 'o')
    {
      d++;
    }
    else if (c == '-' && d > 0)
    {
      dc.push_back(d);
      d = 0;
    }
  }

  if (0 < d && d < n)
  {
    dc.push_back(d);
  }

  sort(dc.rbegin(), dc.rend());

  if (dc.size() == 0)
  {
    cout << "-1" << endl;
    return 0;
  }

  cout << dc[0] << endl;
  return 0;
}