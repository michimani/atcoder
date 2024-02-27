#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  vector<ui> a(n, 0);
  for (auto &aa : a)
    cin >> aa;

  for (ui i = 0; i < k; i++)
    a[i % n] = 0;

  for (ui i = 0; i < n; i++)
  {
    if (i > 0)
      cout << " ";

    cout << a[(k + i) % n];
  }
  cout << endl;

  return 0;
}