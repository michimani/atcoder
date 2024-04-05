#include <iostream>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull a, b, k;
  cin >> a >> b >> k;

  cout << (a >= k ? a - k : 0);
  cout << " ";
  cout << (a >= k ? b : (b >= (k - a) ? b - (k - a) : 0)) << endl;

  return 0;
}