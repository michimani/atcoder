#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;
  string s;
  cin >> s;

  vector<char> alp(26, '.');
  for (ui i = 'a'; i <= 'z'; i++)
    alp[i - 'a'] = char(i);

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
    cout << alp[ss - 'a'];

  cout << endl;

  return 0;
}