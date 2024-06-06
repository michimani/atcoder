#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  char p = '.';
  for (ui i = 0; i < n; i++)
  {
    char c;
    cin >> c;

    if (c == 'a' && p == 'n')
      cout << 'y';

    cout << c;
    p = c;
  }

  cout << endl;

  return 0;
}