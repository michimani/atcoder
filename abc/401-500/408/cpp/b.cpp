#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, bool> m;
  for (; n--;)
  {
    ui a;
    cin >> a;

    m[a] = true;
  }

  string ans = "";
  for (auto mm : m)
    ans += to_string(mm.first) + " ";

  ans.pop_back();

  cout << m.size() << endl;
  cout << ans << endl;

  return 0;
}