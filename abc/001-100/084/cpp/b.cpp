#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  for (ui i = 1; i <= a + b + 1; i++)
  {
    char d;
    cin >> d;

    if ((i == a + 1 && d != '-') || (i != a + 1 && (d < '0' || d > '9')))
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}