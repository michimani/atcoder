#include <iostream>

using namespace std;
using ui = unsigned int;

string sn(ui n)
{
  if (n == 1)
  {
    return "1";
  }

  string snn = sn(n - 1);
  return snn + " " + to_string(n) + " " + snn;
}

int main()
{
  ui n;
  cin >> n;

  cout << sn(n) << endl;
  return 0;
}