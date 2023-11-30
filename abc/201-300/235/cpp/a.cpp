#include <iostream>

using namespace std;

int main()
{
  string abc;
  cin >> abc;

  int a = abc[0] - '0';
  int b = abc[1] - '0';
  int c = abc[2] - '0';

  int ans = a * 100 + b * 10 + c + b * 100 + c * 10 + a + c * 100 + a * 10 + b;

  cout << ans << endl;
  return 0;
}