#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  double r;
  cin >> r;

  cout << fixed << setprecision(5) << 2 * M_PI * r << endl;
  return 0;
}