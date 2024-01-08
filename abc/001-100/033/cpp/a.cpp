#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  char prev = '.';
  for (ui i = 0; i < 4; i++)
  {
    char c;
    cin >> c;
    if (i > 0 && c != prev)
    {
      cout << "DIFFERENT" << endl;
      return 0;
    }

    prev = c;
  }

  cout << "SAME" << endl;
  return 0;
}