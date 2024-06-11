#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  ui a = 0;
  for (; n--;)
  {
    ui h;
    cin >> h;

    if (m >= h)
    {
      m -= h;
      a++;
    }
    else
    {
      break;
    }
  }

  cout << a << endl;

  return 0;
}