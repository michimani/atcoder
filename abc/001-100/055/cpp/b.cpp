#include <iostream>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  ull p = 1;
  const ull d = 1000000007;
  for (ui i = 1; i <= n; i++)
  {
    p *= i;
    p %= d;
  }

  cout << p << endl;
  return 0;
}