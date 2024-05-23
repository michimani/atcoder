#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double t, x;
  cin >> t >> x;

  cout << fixed << setprecision(4) << t / x << endl;

  return 0;
}