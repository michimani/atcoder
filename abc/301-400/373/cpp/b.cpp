#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui ans = 0;

  map<char, int> km;
  for (int i = 0; i < 26; i++)
  {
    char c;
    cin >> c;
    km[c] = i;
  }

  int f = km[char('A')];
  for (int i = int('A'); i <= int('Z'); i++)
  {
    ans += abs(f - km[char(i)]);
    f = km[char(i)];
  }

  cout << ans << endl;

  return 0;
}