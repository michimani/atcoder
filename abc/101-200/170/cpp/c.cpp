#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  int x;
  ui n;
  cin >> x >> n;

  map<int, bool> p;
  for (; n--;)
  {
    int pp;
    cin >> pp;
    p[pp] = true;
  }

  int d = 0;
  while (true)
  {
    if (!p[x - d])
    {
      cout << x - d << endl;
      return 0;
    }

    if (!p[x + d])
    {
      cout << x + d << endl;
      return 0;
    }

    d++;
  }

  return 0;
}