#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  for (ui i = 0; i < 10; i++)
  {
    char c;
    cin >> c;

    if (i == 3)
    {
      c = '8';
    }

    cout << c;
  }

  cout << endl;
  return 0;
}