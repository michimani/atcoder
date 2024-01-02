#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  double a, b;
  cin >> a >> b;

  double n = a * pow(10, floor(log10(b) + 1)) + b;
  if (ui(sqrt(n)) * ui(sqrt(n)) == ui(n))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}