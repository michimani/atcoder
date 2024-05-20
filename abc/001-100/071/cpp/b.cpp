#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  map<char, bool> c;
  for (auto cc : s)
    c[cc] = true;

  for (ui i = 'a'; i <= 'z'; i++)
  {
    if (c.count(char(i)) == 0)
    {
      cout << char(i) << endl;
      return 0;
    }
  }

  cout << "None" << endl;

  return 0;
}