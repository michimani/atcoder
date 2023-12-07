#include <iostream>

using namespace std;

int main()
{
  unsigned long long x;
  cin >> x;
  unsigned int y = 0;
  unsigned long long b = 100;
  while (b < x)
  {
    unsigned long long add = ((b * 101) - (b * 100)) / 100;
    b += add;
    y++;
  }

  cout << y << endl;
  return 0;
}