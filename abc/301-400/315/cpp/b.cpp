#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui m;
  cin >> m;

  ui sum = 0;
  vector<ui> ms(m, 0);
  for (ui i = 0; i < m; i++)
  {
    cin >> ms[i];
    sum += ms[i];
  }

  ui mid = (sum + 1) / 2;

  for (ui i = 0; i < m; i++)
  {
    if (mid > ms[i])
    {
      mid -= ms[i];
    }
    else
    {
      cout << i + 1 << " " << mid << endl;
      return 0;
    }
  }
}