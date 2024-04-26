#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string xy;
  cin >> xy;

  string x = "";
  for (auto c : xy)
  {
    if (c == '.')
      break;

    x += c;
  }

  string p = "";
  ui y = xy[xy.length() - 1] - '0';
  if (y <= 2)
    p = "-";
  else if (y >= 7)
    p = "+";

  cout << x << p << endl;
  return 0;
}