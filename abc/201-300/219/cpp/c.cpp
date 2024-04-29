#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;
using ui = unsigned int;

map<char, ui> x;

bool comp(string &l, string &r)
{
  ui len = min(l.length(), r.length());
  for (ui i = 0; i < len; i++)
    if (x[l[i]] != x[r[i]])
      return x[l[i]] < x[r[i]];

  return l.length() < r.length();
}

int main()
{
  for (ui i = 0; i < 26; i++)
  {
    char xx;
    cin >> xx;
    x[xx] = i;
  }

  ui n;
  cin >> n;
  vector<string> s(n);
  for (auto &ss : s)
    cin >> ss;

  sort(s.begin(), s.end(), comp);

  for (auto &ss : s)
    cout << ss << endl;

  return 0;
}