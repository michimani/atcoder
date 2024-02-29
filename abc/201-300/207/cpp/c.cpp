#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

bool has_dup(pair<double, double> a, pair<double, double> b)
{
  if (
      (a.first <= b.first && b.second <= a.second) ||
      (b.first <= a.first && a.second <= b.second) ||
      (a.first <= b.first && b.first <= a.second && a.second <= b.second) ||
      (b.first <= a.first && a.first <= b.second && b.second <= a.second))
  {
    return true;
  }

  return false;
}

int main()
{
  ui n;
  cin >> n;

  vector<pair<double, double>> ivv(n);
  ui t;
  for (auto &iv : ivv)
  {
    cin >> t >> iv.first >> iv.second;
    if (t == 2 || t == 4)
      iv.second -= 0.1;

    if (t == 3 || t == 4)
      iv.first += 0.1;
  }

  ui ans = 0;
  for (ui i = 0; i < n; i++)
    for (ui j = i + 1; j < n; j++)
      ans += ui(has_dup(ivv[i], ivv[j]));

  cout << ans << endl;
}
