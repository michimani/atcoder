#include <iostream>
#include <set>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  set<char> ex = {'a', 'e', 'i', 'o', 'u'};

  for (auto &c : s)
  {
    if (!ex.contains(c))
    {
      cout << c;
    }
  }

  cout << endl;

  return 0;
}