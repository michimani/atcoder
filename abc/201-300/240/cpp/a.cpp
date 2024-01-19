#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  if (abs(a - b) == 1 || abs(a % 10 - b % 10) == 1)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}