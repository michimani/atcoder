#include <iostream>

using namespace std;

int main()
{
  char prev = '.';
  for (unsigned int i = 0; i < 4; i++)
  {
    char c;
    cin >> c;
    if (c == prev)
    {
      cout << "Bad" << endl;
      return 0;
    }

    prev = c;
  }

  cout << "Good" << endl;
  return 0;
}