#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<ui> d = {3, 1, 4, 1, 5, 9};
  char p, q;
  cin >> p >> q;

  if (p > q)
    swap(p, q);

  ui ans = 0;
  for (ui i = ui(p) - 65; i < ui(q) - 65; i++)
  {
    ans += d[i];
  }

  cout << ans << endl;
  return 0;
}