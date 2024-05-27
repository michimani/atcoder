#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  string a, b;
  cin >> a >> b;

  ui l = ui(min(a.length(), b.length()));

  for (ui i = 0; i < l; i++)
  {
    if ((a[a.length() - 1 - i] - '0') + (b[b.length() - 1 - i] - '0') > 9)
    {
      cout << "Hard" << endl;
      return 0;
    }
  }

  cout << "Easy" << endl;

  return 0;
}