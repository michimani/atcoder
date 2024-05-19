#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a > c)
    swap(a, c);
  if (b > d)
    swap(b, d);

  cout << max(0, b - c) << endl;

  return 0;
}