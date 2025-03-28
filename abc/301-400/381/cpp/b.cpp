#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  if (s.length() % 2 != 0)
  {
    cout << "No" << endl;
    return 0;
  }

  map<char, ui> cc;
  for (ui i = 1; i <= s.length() / 2; i++)
  {
    if (s[i * 2 - 1 - 1] != s[i * 2 - 1])
    {
      cout << "No" << endl;
      return 0;
    }

    cc[s[i * 2 - 1]] += 2;
  }

  for (auto c : cc)
  {
    if (c.second != 2)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}