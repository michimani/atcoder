#include <iostream>

using namespace std;

int main()
{
  unsigned long long a, b;
  cin >> a >> b;

  if (a % b == 0)
  {
    cout << a / b << endl;
    return 0;
  }

  cout << a / b + 1 << endl;
  return 0;
}