#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<int, unsigned int> xc;
  map<int, unsigned int> yc;
  for (int i = 0; i < 3; i++)
  {
    int x, y;
    cin >> x >> y;
    xc[x]++;
    yc[y]++;
  }

  auto xitr = xc.begin();
  while (xitr != xc.end())
  {
    if (xitr->second % 2 != 0)
    {
      cout << xitr->first;
      break;
    }
    xitr++;
  }

  cout << " ";

  auto yitr = yc.begin();
  while (yitr != yc.end())
  {
    if (yitr->second % 2 != 0)
    {
      cout << yitr->first;
      break;
    }
    yitr++;
  }

  cout << endl;
  return 0;
}