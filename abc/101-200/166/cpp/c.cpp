#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

string key(ui i, ui h)
{
  return to_string(i) + "-" + to_string(h);
}

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<ui> h(n, 0);
  map<string, bool> t;
  for (ui i = 0; i < n; i++)
  {
    cin >> h[i];
    t[key(i + 1, h[i])] = true;
  }

  for (; m--;)
  {
    ui a, b;
    cin >> a >> b;
    string k = key(a, h[a - 1]);
    if (h[a - 1] <= h[b - 1] && t.count(k) > 0)
      t.erase(k);

    k = key(b, h[b - 1]);
    if (h[b - 1] <= h[a - 1] && t.count(k) > 0)
      t.erase(k);
  }

  cout << t.size() << endl;
  return 0;
}