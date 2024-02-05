#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  map<string, ui> dish;
  map<string, ui> price_d;
  map<ui, ui> price_p;
  for (ui i = 0; i < n; i++)
  {
    string c;
    cin >> c;
    dish[c]++;
  }

  for (ui i = 0; i < m; i++)
  {
    string d;
    cin >> d;
    price_d[d] = i;
  }

  ui default_p;
  cin >> default_p;
  for (ui i = 0; i < m; i++)
  {
    ui p;
    cin >> p;
    price_p[i] = p;
  }

  ui ans = 0;
  auto it = dish.begin();
  while (it != dish.end())
  {
    if (price_d.count(it->first) > 0)
    {
      ans += price_p[price_d[it->first]] * it->second;
    }
    else
    {
      ans += default_p * it->second;
    }
    it++;
  }

  cout << ans << endl;
  return 0;
}