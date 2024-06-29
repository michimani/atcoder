#include <iostream>
#include <deque>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<char, deque<char>> p = {
      {'a', {}},
      {'b', {}},
      {'c', {}},
  };

  for (auto &pp : p)
  {
    string s;
    cin >> s;
    for (ui i = 0; i < s.length(); i++)
      pp.second.push_back(s[i]);
  }

  char t = 'a';

  while (p[t].size() > 0)
  {
    char nt = p[t].front();
    p[t].pop_front();
    t = nt;
  }

  cout << char(t - 32) << endl;

  return 0;
}