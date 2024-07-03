#include <iostream>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull a, b, x;
  cin >> a >> b >> x;

  cout << b / x - a / x + ull(a % x == 0) << endl;

  return 0;
}