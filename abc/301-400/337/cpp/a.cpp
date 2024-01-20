#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui t = 0, a = 0;
  for (ui i = 0; i < n; i++)
  {
    ui x, y;
    cin >> x >> y;
    t += x;
    a += y;
  }

  if (t > a)
  {
    cout << "Takahashi" << endl;
  }
  else if (t < a)
  {
    cout << "Aoki" << endl;
  }
  else
  {
    cout << "Draw" << endl;
  }

  return 0;
}