#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  char p = '.';
  ui k = 1;
  for (auto &c : s)
  {
    if (c == p)
    {
      k++;
    }
    else if (p != '.')
    {
      cout << p << k;
      k = 1;
    }

    p = c;
  }

  cout << p << k << endl;

  return 0;
}