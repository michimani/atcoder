#include <iostream>

using namespace std;

int main()
{
  unsigned int a, b;
  cin >> a >> b;

  string s;
  if (a == b || a > b)
  {
    s = string(a, char(int(b) + '0'));
  }
  else
  {
    s = string(b, char(int(a) + '0'));
  }

  cout << s << endl;
  return 0;
}