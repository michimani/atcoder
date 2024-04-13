#include <iostream>
#include <cmath>
#include <map>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull n;
  cin >> n;

  map<ull, bool> d;
  for (ull i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      d[i] = true;
      d[n / i] = true;
    }
  }

  for (auto dd : d)
    cout << dd.first << endl;

  return 0;
}