#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  int n;
  cin >> n;

  while (n > 0)
    n -= 1000;

  cout << abs(n) << endl;

  return 0;
}