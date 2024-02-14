#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, string> ts;
  for (; n--;)
  {
    string s;
    ui t;
    cin >> s >> t;
    ts[t] = s;
  }

  cout << (++ts.rbegin())->second << endl;
  return 0;
}