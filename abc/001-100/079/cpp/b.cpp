#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ull n;
  cin >> n;

  if (n == 1)
  {
    cout << 1 << endl;
    return 0;
  }

  vector<ull> l(n + 1, 0);
  l[0] = 2;
  l[1] = 1;

  for (ui i = 2; i <= n; i++)
    l[i] = l[i - 1] + l[i - 2];

  cout << l[n] << endl;
  return 0;
}