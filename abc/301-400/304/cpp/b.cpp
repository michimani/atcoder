#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  if (n <= 1000 - 1)
  {
    cout << n << endl;
    return 0;
  }

  ui d = ui(to_string(n).size());
  ui dd = pow(10, d - 3);
  cout << (n / dd) * dd << endl;
  return 0;
}