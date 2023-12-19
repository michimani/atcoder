#include <iostream>

using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;

  if (
      (abs(s[0] - s[1]) % 3 == 1 && abs(t[0] - t[1]) % 3 == 1) ||
      (abs(s[0] - s[1]) % 3 != 1 && abs(t[0] - t[1]) % 3 != 1))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}