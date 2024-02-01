#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  bool r = false;
  for (ui i = 0; i < n; i++)
  {
    char c;
    cin >> c;

    if (c == 'x')
    {
      cout << "No" << endl;
      return 0;
    }

    if (c == 'o')
    {
      r = true;
    }
  }

  if (!r)
  {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}