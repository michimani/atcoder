#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  string s, t;
  cin >> s >> t;

  if (t.length() > s.length())
  {
    cout << "No" << endl;
    return 0;
  }

  ui ti = 0;
  for (auto &c : s)
  {
    if (ti == t.length())
    {
      break;
    }

    if (t[ti] == c)
    {
      ti++;
    }
    else
    {
      ti = 0;
    }
  }

  if (ti < t.length())
  {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;

  return 0;
}