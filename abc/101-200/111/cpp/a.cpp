#include <iostream>

using namespace std;

int main()
{
  string n(3, '.');
  for (auto &c : n)
  {
    cin >> c;
    if (c == '1')
      c = '9';
    else if (c == '9')
      c = '1';
    else
      // noop
      ;
  }

  cout << n << endl;

  return 0;
}