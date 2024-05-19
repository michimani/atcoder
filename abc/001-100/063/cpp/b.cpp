#include <iostream>
#include <map>

using namespace std;

int main()
{
  string s;
  cin >> s;

  map<char, bool> m;
  for (auto c : s)
  {
    if (m.count(c) > 0)
    {
      cout << "no" << endl;
      return 0;
    }

    m[c] = true;
  }

  cout << "yes" << endl;

  return 0;
}