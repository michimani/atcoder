#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui y = (s[0] - '0') * 1000 + (s[1] - '0') * 100 + (s[2] - '0') * 10 + (s[3] - '0');
  ui m = (s[5] - '0') * 10 + (s[6] - '0');

  if (y > 2019)
    cout << "TBD" << endl;
  else if (m > 4)
    cout << "TBD" << endl;
  else
    cout << "Heisei" << endl;

  return 0;
}