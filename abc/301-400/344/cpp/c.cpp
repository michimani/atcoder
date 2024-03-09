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
  ull b;
  map<ull, bool> ab;
  for (; m--;)
  {
    cin >> b;
    for (auto aa : a)
      ab[aa + b] = true;
  }

  cin >> l;
  ull c;
  for (; l--;)
  {
    cin >> c;
    auto it = ab.begin();
    while (it != ab.end())
    {
      sum[it->first + c] = true;
      it++;
    }
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