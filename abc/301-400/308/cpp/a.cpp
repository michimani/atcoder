#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui p = 0;
  for (ui i = 0; i < 8; i++)
  {
    ui s;
    cin >> s;
    if (s < p || (s < 100 || s > 675) || s % 5 != 0)
    {
      cout << "No" << endl;
      return 0;
    }

    p = s;
  }

  cout << "Yes" << endl;
  return 0;
}