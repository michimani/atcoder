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
    if (c == p)
    {
      cout << "No" << endl;
      return 0;
    }
    p = c;
  }

  cout << "Yes" << endl;
  return 0;
}