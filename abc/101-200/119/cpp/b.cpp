#include <iostream>
#include <iomanip>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  const double by = 380000.0;

  double t = 0;
  for (; n--;)
  {
    double x;
    string u;
    cin >> x >> u;

    t += (u == "JPY" ? x : x * by);
  }

  cout << fixed << setprecision(6) << t << endl;

  return 0;
}