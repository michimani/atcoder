#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<char> alp(26, '.');
  for (ui i = 'a'; i <= 'z'; i++)
    alp[i - 'a'] = char(i);

  ui n;
  cin >> n;

  vector<char *> s(n);
  for (ui i = 0; i < n; i++)
  {
    char c;
    cin >> c;
    s[i] = &alp[c - 'a'];
  }

  ui q;
  cin >> q;
  for (; q--;)
  {
    char c, d;
    cin >> c >> d;

    if (c == d)
      continue;

    for (auto &&al : alp)
      al = al == c ? d : al;
  }

  for (auto ss : s)
    cout << *ss;

  cout << endl;

  return 0;
}