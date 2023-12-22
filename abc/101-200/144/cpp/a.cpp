#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  if (a > 0 && a < 10 && b > 0 && b < 10)
  {
    cout << a * b << endl;
    return 0;
  }

  cout << "-1" << endl;
  return 0;
}