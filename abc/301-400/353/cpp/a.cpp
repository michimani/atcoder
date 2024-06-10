#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui h;
  cin >> h;

  for (ui i = 2; i <= n; i++)
  {
    ui hh;
    cin >> hh;
    if (hh > h)
    {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}