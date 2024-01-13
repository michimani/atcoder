#include <iostream>
#include <set>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  set<char> f = {'H', 'D', 'C', 'S'};
  set<char> s = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
  set<string> sss;

  for (ui i = 0; i < n; i++)
  {
    string ss;
    cin >> ss;
    if (!f.contains(ss[0]) || !s.contains(ss[1]) || sss.contains(ss))
    {
      cout << "No" << endl;
      return 0;
    }
    sss.insert(ss);
  }

  cout << "Yes" << endl;
  return 0;
}