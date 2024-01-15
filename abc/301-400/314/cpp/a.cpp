#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string pi_d = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

  ui n;
  cin >> n;

  cout << "3.";
  for (ui i = 0; i < n; i++)
  {
    cout << pi_d[i];
  }
  cout << endl;

  return 0;
}