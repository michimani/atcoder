#include <iostream>
#include <vector>

using namespace std;

int main()
{
  unsigned int h, w;
  cin >> h >> w;

  vector<string> a(h, string(w, '.'));
  for (auto &r : a)
  {
    cin >> r;
  }

  vector<string> b(h, string(w, '.'));
  for (auto &r : b)
  {
    cin >> r;
  }

  for (unsigned int s = 0; s < h; s++)
  {
    for (unsigned int t = 0; t < w; t++)
    {
      bool ok = true;
      for (unsigned int hi = 0; hi < h; hi++)
      {
        for (unsigned int wi = 0; wi < w; wi++)
        {
          if (a[(hi + s) % h][(wi + t) % w] != b[hi][wi])
          {
            ok = false;
            break;
          }
        }

        if (!ok)
        {
          break;
        }
      }

      if (ok)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}