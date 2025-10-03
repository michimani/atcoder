#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  if (s[2] == '8')
    cout << char(s[0] + 1) << "-" << "1" << endl;
  else
    cout << s[0] << "-" << char(s[2] + 1) << endl;

  return 0;
}