#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, n;
  cin >> a >> b >> n;

  while (n % a != 0 || n % b != 0)
  {
    n++;
  }

  cout << n << endl;
  return 0;
}