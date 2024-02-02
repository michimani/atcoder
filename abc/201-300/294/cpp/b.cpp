#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w;
  cin >> h >> w;

  for (ui i = 0; i < h; i++)
  {
    for (ui j = 0; j < w; j++)
    {
      ui a;
      cin >> a;
      if (a == 0)
      {
        cout << '.';
      }
      else
      {
        cout << char('A' + a - 1);
      }
    }
    cout << endl;
  }
}