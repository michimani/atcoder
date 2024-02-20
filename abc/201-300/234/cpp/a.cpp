#include <iostream>

using namespace std;
using ui = unsigned int;

ui f(ui x)
{
  return x * x + 2 * x + 3;
}

int main()
{
  ui t;
  cin >> t;

  cout << f(f(f(t) + t) + f(f(t))) << endl;
  return 0;
}