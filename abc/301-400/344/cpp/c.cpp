#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  map<ull, bool> sum;

  ui n, m, l, q;
  cin >> n;
  vector<ull> a(n, 0);
  for (auto &aa : a)
    cin >> aa;

  cin >> m;
  vector<ull> b(m, 0);
  vector<ull> ab;
  for (auto &bb : b)
  {
    cin >> bb;
    for (auto aa : a)
      ab.push_back(aa + bb);
  }

  cin >> l;
  vector<ull> c(l, 0);
  for (auto &cc : c)
  {
    cin >> cc;
    for (auto aabb : ab)
      sum[aabb + cc] = true;
  }

  cin >> q;
  ull x;
  for (; q--;)
  {
    cin >> x;
    cout << (sum[x] ? "Yes" : "No") << endl;
  }

  return 0;
}