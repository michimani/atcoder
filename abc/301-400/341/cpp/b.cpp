#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  vector<ull> a(n, 0);
  for (auto &aa : a)
    cin >> aa;

  for (ui i = 0; i < n - 1; i++)
  {
    ull s, t;
    cin >> s >> t;
    a[i + 1] += (t * (a[i] / s));
  }

  cout << a[n - 1] << endl;
  return 0;
}