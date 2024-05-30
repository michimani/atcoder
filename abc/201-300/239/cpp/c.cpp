#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;

int main()
{
  pair<ll, ll> a, b;
  cin >> a.first >> a.second >> b.first >> b.second;

  vector<pair<ll, ll>> d = {
      {-2, 1},
      {-1, 2},
      {1, 2},
      {2, 1},
      {2, -1},
      {1, -2},
      {-1, -2},
      {-2, -1},
  };

  for (auto &dd : d)
  {
    pair<ll, ll> c = {a.first + dd.first, a.second + dd.second};
    ll e = ll(pow(b.first - c.first, 2)) + ll(pow(b.second - c.second, 2));
    if (e == 5)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}