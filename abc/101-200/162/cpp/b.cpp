#include <iostream>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull n;
  cin >> n;

  ull sum = 0;
  for (ull i = 1; i <= n; i++)
    sum += (i % 3 != 0 && i % 5 != 0 && i % 15 != 0 ? i : 0);

  cout << sum << endl;
  return 0;
}