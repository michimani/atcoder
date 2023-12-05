#include <iostream>

using namespace std;

int main()
{
  int a, b, k;
  cin >> a >> b >> k;

  int d = 100;
  int c = 0;
  while (true)
  {
    if (a % d == 0 && b % d == 0)
    {
      c++;
    }

    if (k == c)
    {
      break;
    }

    d--;
  }

  cout << d << endl;
  return 0;
}