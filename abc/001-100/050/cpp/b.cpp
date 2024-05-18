#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> t(n, 0);
  ui total = 0;
  for (auto &tt : t)
  {
    cin >> tt;
    total += tt;
  }

  ui m;
  cin >> m;
  for (; m--;)
  {
    ui p, x;
    cin >> p >> x;

    cout << total - t[p - 1] + x << endl;
  }

  return 0;
}