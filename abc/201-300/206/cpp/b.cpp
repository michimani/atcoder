#include <iostream>

using namespace std;
using ui = unsigned int;

ui add(ui &t, ui d, ui sum)
{
  if (sum >= t)
  {
    return d - 1;
  }

  return add(t, d + 1, sum + d);
}

int main()
{
  ui n;
  cin >> n;

  cout << add(n, 0, 0) << endl;
  return 0;
}