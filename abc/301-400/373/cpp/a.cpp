#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui ans = 0;

  string s;
  for (ui i = 1; i <= 12; i++)
  {
    cin >> s;
    ans += s.length() == i;
  }

  cout << ans << endl;
  ;

  return 0;
}