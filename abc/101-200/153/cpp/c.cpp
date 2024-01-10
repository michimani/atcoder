#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
using ui = unsigned int;
using ul = unsigned long;

int main()
{
  ui n, k;
  cin >> n >> k;

  vector<ul> hs(n, 0);
  ul sum = 0;
  for (auto &h : hs)
  {
    cin >> h;
    sum += h;
  }

  sort(hs.rbegin(), hs.rend());

  for (ui i = 0; i < min(k, n); i++)
  {
    sum -= hs[i];
  }

  cout << sum << endl;
  return 0;
}