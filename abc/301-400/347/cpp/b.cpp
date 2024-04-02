#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  map<string, bool> ss;
  string tmp = "";
  for (ui i = 1; i <= s.length(); i++)
  {
    for (ui j = 0; j <= s.length() - i; j++)
    {
      for (ui k = j; k < j + i; k++)
        tmp.push_back(s[k]);
      ss[tmp] = true;
      tmp = "";
    }
  }

  cout << ss.size() << endl;
  return 0;
}