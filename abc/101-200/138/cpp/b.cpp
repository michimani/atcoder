#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  double ans = 0;
  for (; n--;)
  {
    double a;
    cin >> a;
    ans += pow(a, -1);
  }

  cout << fixed << setprecision(5) << pow(ans, -1) << endl;
  return 0;
}