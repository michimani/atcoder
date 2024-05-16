#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  cout << n / 2 + ui(n % 2 != 0) << endl;
  if (n % 2 != 0)
    cout << 1 << endl;

  for (ui i = 0; i < n / 2; i++)
    cout << 2 << endl;

  return 0;
}