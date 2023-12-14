#include <iostream>

using namespace std;

int main()
{
  unsigned int a, b;
  cin >> a >> b;

  unsigned int diff = b - a;

  unsigned int west = 0;
  for (unsigned int i = 1; i <= diff - 1; i++)
  {
    west += i;
  }

  cout << west - a << endl;
  return 0;
}