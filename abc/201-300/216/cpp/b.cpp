#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<string, bool> name;
  for (; n--;)
  {
    string s, t;
    cin >> s >> t;

    string st = s + "-" + t;
    if (name.count(st) > 0)
    {
      cout << "Yes" << endl;
      return 0;
    }

    name[st] = true;
  }

  cout << "No" << endl;
  return 0;
}