#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s, t;
  cin >> s >> t;

  ui m = 0;
  ui ti = 0;
  for (auto sc : s)
  {
    if (ti == t.length())
      break;

    if (sc - 32 == t[ti])
    {
      m++;
      ti++;
    }
  }

  if (m == 3)
    cout << "Yes" << endl;
  else if (m == 2 && t[2] == 'X')
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}