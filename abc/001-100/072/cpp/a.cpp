#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int x, t;
  cin >> x >> t;

  cout << max(0, x - t) << endl;

  return 0;
}