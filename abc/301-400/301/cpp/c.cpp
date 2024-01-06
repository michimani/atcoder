#include <iostream>
#include <map>
#include <set>

using namespace std;
using ui = unsigned int;

int main()
{
  string s, t;
  cin >> s >> t;

  set<char> atcoder = {'a', 't', 'c', 'o', 'd', 'e', 'r'};

  map<char, int> sm;
  map<char, int> tm;
  map<char, bool> cm;

  for (ui i = 0; i < s.size(); i++)
  {
    sm[s[i]]++;
    tm[t[i]]++;

    if (s[i] != '@')
    {
      cm[s[i]] = true;
    }
    if (t[i] != '@')
    {
      cm[t[i]] = true;
    }
  }

  int ac = sm['@'] + tm['@'];

  auto it = cm.begin();
  while (it != cm.end())
  {
    int d = abs(sm[it->first] - tm[it->first]);
    if (d != 0)
    {
      if (!atcoder.contains(it->first) || ac < d)
      {
        cout << "No" << endl;
        return 0;
      }

      ac -= d;
    }

    it++;
  }

  cout << "Yes" << endl;
  return 0;
}