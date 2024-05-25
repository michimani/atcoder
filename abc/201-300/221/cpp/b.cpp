#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s, t;
  cin >> s >> t;

  if (s == t)
  {
    cout << "Yes" << endl;
    return 0;
  }

  for (ui i = 0; i < s.length() - 1; i++)
  {
    string ss = s;
    swap(ss[i], ss[i + 1]);
    if (ss == t)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}