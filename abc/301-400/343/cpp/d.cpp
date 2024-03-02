#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n, t;
  cin >> n >> t;

  map<ull, ui> sc = {{0, n}};
  vector<ull> a(n, 0);

  for (ui i = 0; i < t; i++)
  {
    ui ai;
    ull bi;

    cin >> ai >> bi;

    ai--;

    sc[a[ai]]--;
    if (sc[a[ai]] == 0)
      sc.erase(a[ai]);

    a[ai] += bi;
    sc[a[ai]]++;

    cout << sc.size() << endl;
  }

  return 0;
}