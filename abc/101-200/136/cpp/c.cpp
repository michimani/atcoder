#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

void check(vector<ui> &h, ui mx, ui pos, ui prev, bool &ok)
{
  if (pos == h.size() - 1 || ok)
  {
    ok = true;
    return;
  }

  if (prev > h[pos] || h[pos] < mx)
  {
    return;
  }

  if (h[pos] <= h[pos + 1])
  {
    check(h, max(mx, h[pos]), pos + 1, h[pos], ok);
  }
  if (h[pos] > prev && h[pos] > 0 && (h[pos] >= h[pos + 1] && h[pos] - h[pos + 1] <= 1))
  {
    check(h, max(mx, h[pos] - 1), pos + 1, h[pos] - 1, ok);
  }

  return;
}

int main()
{
  ui n;
  cin >> n;

  if (n == 1)
  {
    cout << "Yes" << endl;
    return 0;
  }

  vector<ui> h(n, 0);
  for (auto &hh : h)
  {
    cin >> hh;
  }

  bool ok = false;
  check(h, h[0], 1, h[0], ok);
  check(h, h[0] - 1, 1, h[0] - 1, ok);

  if (ok)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}