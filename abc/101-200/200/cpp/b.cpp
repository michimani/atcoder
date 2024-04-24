#include <iostream>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ull n;
  ui k;
  cin >> n >> k;

  for (; k--;)
  {
    if (n % 200 == 0)
      n /= 200;
    else
      n = n * 1000 + 200;
  }

  cout << n << endl;
  return 0;
}