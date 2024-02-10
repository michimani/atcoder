#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, d;
  cin >> a >> b >> d;

  bool o = false;
  while (true)
  {
    if (o)
    {
      cout << " ";
    }
    else
    {
      o = true;
    }
    cout << a;
    if (a == b)
    {
      break;
    }
    a += d;
  }
  cout << endl;

  return 0;
}