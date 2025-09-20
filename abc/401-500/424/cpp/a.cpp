#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c;
  cin >> a >> b >> c;

  if (a == b || b == c || c == a)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}