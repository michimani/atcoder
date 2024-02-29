#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  string s;
  cin >> n >> s;

  string ss = "b";
  ui i = 0;
  for (i = 1; i <= n; i++)
  {
    if (ss.length() >= s.length())
      break;

    switch (i % 3)
    {
    case 0:
      ss = "b" + ss + "b";
      break;

    case 1:
      ss = "a" + ss + "c";
      break;

    case 2:
      ss = "c" + ss + "a";
      break;

    default:
      // noop
      break;
    }
  }

  cout << (ss == s ? to_string(i - 1) : "-1") << endl;
  return 0;
}