#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

string key(ui a, ui b)
{
  if (a > b)
    swap(a, b);

  return to_string(a) + "-" + to_string(b);
}

int main()
{
  ui n, m;
  cin >> n >> m;

  ui need = n * (n - 1) / 2;
  map<string, bool> pairs;
  ui k = 0;
  for (; m--;)
  {
    cin >> k;
    vector<ui> xv(k, 0);
    for (auto &x : xv)
      cin >> x;

    for (ui i = 0; i < k; i++)
      for (ui j = i + 1; j < k; j++)
        pairs[key(xv[i], xv[j])] = true;
  }

  cout << (pairs.size() == need ? "Yes" : "No") << endl;
  return 0;
}