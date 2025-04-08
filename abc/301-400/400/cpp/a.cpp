#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a;
  cin >> a;

  if (400 % a != 0)
    cout << "-1" << endl;
  else
    cout << 400 / a << endl;

  return 0;
}