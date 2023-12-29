#include <iostream>

using namespace std;

int main()
{
  unsigned int h, w;
  cin >> h >> w;

  unsigned int ans = 0;
  for (unsigned int i = 0; i < h; i++)
  {
    for (unsigned int j = 0; j < w; j++)
    {
      char c;
      cin >> c;

      ans += (unsigned int)(c == '#');
    }
  }

  cout << ans << endl;
  return 0;
}