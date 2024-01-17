#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

struct Name
{
  string s;
  string t;
};

int main()
{
  ui n;
  cin >> n;

  map<string, ui> ac;
  vector<Name> ns(n);
  for (auto &n : ns)
  {
    cin >> n.s >> n.t;
    ac[n.s]++;
    ac[n.t]++;
  }

  for (auto &n : ns)
  {
    if ((n.s != n.t && ac[n.s] != 1 && ac[n.t] != 1) ||
        (n.s == n.t && ac[n.s] > 2))
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}