#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  string s, t, u;
  ui a, b;

  cin >> s >> t >> a >> b >> u;
  map<string, ui> m = {
      {s, a},
      {t, b},
  };

  m[u]--;

  cout << m[s] << " " << m[t] << endl;
  return 0;
}