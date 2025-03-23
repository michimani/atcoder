#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  if (n <= 2)
    for (; n--;)
      cout << "=";
  else
    for (ui i = 1; i <= n; i++)
      if ((n % 2 == 0 && (i == n / 2 || i == n / 2 + 1)) || (n % 2 != 0 && i == n / 2 + 1))
        cout << "=";
      else
        cout << "-";

  cout << endl;

  return 0;
}