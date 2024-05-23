#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c;
  cin >> a >> b >> c;

  if (a < b)
    swap(a, b);
  if (a < c)
    swap(a, c);

  cout << a * 10 + b + c << endl;

  return 0;
}