#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui d10 = n / 16;
  ui d1 = n % 16;

  if (d10 <= 9)
  {
    cout << d10;
  }
  else
  {
    cout << char('A' + (d10 - 10));
  }

  if (d1 <= 9)
  {
    cout << d1;
  }
  else
  {
    cout << char('A' + (d1 - 10));
  }

  cout << endl;
  return 0;
}