#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui ans = 1000000001;
  bool bought = false;
  for (; n--;)
  {
    ui a, p, x;
    cin >> a >> p >> x;
    if (x <= a)
      continue;

    bought = true;
    ans = min(ans, p);
  }

  cout << (bought ? to_string(ans) : "-1") << endl;
  return 0;
}