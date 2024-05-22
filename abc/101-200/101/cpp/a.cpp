#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui l = 4;
  int ans = 0;
  for (; l--;)
  {
    char c;
    cin >> c;
    ans = (c == '+' ? ans + 1 : ans - 1);
  }

  cout << ans << endl;

  return 0;
}