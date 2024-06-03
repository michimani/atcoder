#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c, d;
  cin >> a >> b >> c >> d;

  if ((a == c && b <= d) || a < c)
    cout << "Takahashi" << endl;
  else
    cout << "Aoki" << endl;

  return 0;
}