#include <iostream>
#include <set>

using namespace std;
using ui = unsigned int;

int main()
{
  set<char> at = {'a', 't', 'c', 'o', 'd', 'e', 'r'};
  string s, t;
  cin >> s >> t;

  for (ui i = 0; i < s.length(); i++)
  {
    if ((s[i] == '@' && at.contains(t[i])) || (t[i] == '@' && at.contains(s[i])) || s[i] == t[i])
      continue;

    cout << "You will lose" << endl;
    return 0;
  }

  cout << "You can win" << endl;

  return 0;
}