#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<string, bool> sm;
  for (; n--;)
  {
    string s;
    cin >> s;

    string cs;
    string rs = s;
    if (s[0] != '!')
    {
      cs = '!' + s;
    }
    else
    {
      cs = "";
      for (ui i = 1; i < s.length(); i++)
        cs += s[i];
      rs = cs;
    }

    if (sm.count(cs) > 0)
    {
      cout << rs << endl;
      return 0;
    }

    sm[s] = true;
  }

  cout << "satisfiable" << endl;
  return 0;
}