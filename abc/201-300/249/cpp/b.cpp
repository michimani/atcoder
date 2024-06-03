#include <iostream>
#include <map>

using namespace std;

int main()
{
  string s;
  cin >> s;

  bool l = false, u = false;
  map<char, bool> cm;
  for (auto &c : s)
  {
    if (c >= 'a' && c <= 'z')
      l = true;
    if (c >= 'A' && c <= 'Z')
      u = true;
    cm[c] = true;
  }

  if (l && u && cm.size() == s.length())
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}