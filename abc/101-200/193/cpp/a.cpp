#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double a, b;
  cin >> a >> b;

  cout << fixed << setprecision(3) << ((a - b) / a) * 100.00 << endl;
  return 0;
}