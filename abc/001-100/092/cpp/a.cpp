#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c, d;
  cin >> a >> b >> c >> d;

  vector<ui> s = {
      a + c,
      a + d,
      b + c,
      b + d};

  sort(s.begin(), s.end());

  cout << s[0] << endl;

  return 0;
}