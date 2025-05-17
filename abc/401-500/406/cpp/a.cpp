#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a > c)
    cout << "Yes" << endl;
  else if (a == c && b > d)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}