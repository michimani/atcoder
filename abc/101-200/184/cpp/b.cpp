#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  int x;
  cin >> n >> x;

  for (; n--;)
  {
    char a;
    cin >> a;
    x = max(0, x + (a == 'o' ? 1 : -1));
  }

  cout << x << endl;

  return 0;
}