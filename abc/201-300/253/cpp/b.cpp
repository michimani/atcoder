#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w;
  cin >> h >> w;

  int h1, w1, h2, w2;
  ui sc = 0;
  for (ui hi = 0; hi < h; hi++)
  {
    for (ui wi = 0; wi < w; wi++)
    {
      char s;
      cin >> s;
      if (s == 'o')
      {
        sc++;
        if (sc == 1)
        {
          h1 = int(hi), w1 = int(wi);
        }
        else
        {
          h2 = int(hi), w2 = int(wi);
        }
      }
    }
  }

  cout << abs(h1 - h2) + abs(w1 - w2) << endl;
  return 0;
}