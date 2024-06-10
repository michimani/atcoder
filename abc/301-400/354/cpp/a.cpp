#include <iostream>
#include <cmath>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull h;
  cin >> h;

  ull i = 0;
  ull k = 0;
  while (k <= h)
  {
    k += pow(2, i);
    i++;
  }

  cout << i << endl;

  return 0;
}