#include <iostream>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  ull tl = 0;
  string s = "";

  char c = '.';
  ull l = 0;
  for (; n--;)
  {
    cin >> c >> l;
    tl += l;

    if (tl > 100)
    {
      cout << "Too Long" << endl;
      return 0;
    }

    s += string(l, c);
  }

  cout << s << endl;

  return 0;
}