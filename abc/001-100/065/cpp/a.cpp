#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui x, a, b;
  cin >> x >> a >> b;

  if (b <= a)
  {
    cout << "delicious" << endl;
  }
  else if (b - a <= x)
  {
    cout << "safe" << endl;
  }
  else
  {
    cout << "dangerous" << endl;
  }

  return 0;
}