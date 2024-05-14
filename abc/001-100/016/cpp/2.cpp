#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<char> ans = {'!', '+', '?'};

  int a, b, c;
  cin >> a >> b >> c;

  ui ai = 0;

  if (a + b == c)
  {
    ai++;
    ans[1] = '+';
  }
  if (a - b == c)
  {
    ai++;
    ans[1] = '-';
  }

  cout << ans[ai] << endl;
  return 0;
}