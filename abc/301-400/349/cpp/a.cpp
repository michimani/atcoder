#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  n--;

  int total = 0;
  for (; n--;)
  {
    int a;
    cin >> a;
    total += a;
  }

  cout << 0 - total << endl;
  return 0;
}