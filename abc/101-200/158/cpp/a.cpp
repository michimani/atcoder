#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  char prev = '.';
  for (ui i = 0; i < 3; i++)
  {
    char c;
    cin >> c;

    if (prev != '.' && prev != c)
    {
      cout << "Yes" << endl;
      return 0;
    }

    prev = c;
  }

  cout << "No" << endl;
  return 0;
}