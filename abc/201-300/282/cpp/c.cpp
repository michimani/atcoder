#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  bool in = false;
  for (ui i = 0; i < n; i++)
  {
    char c;
    cin >> c;
    if (c == '"')
    {
      in = !in;
    }
    else if (c == ',' && !in)
    {
      c = '.';
    }
    cout << c;
  }
  cout << endl;

  return 0;
}