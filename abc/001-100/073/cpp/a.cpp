#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui l = 2;
  for (; l--;)
  {
    char d;
    cin >> d;
    if (d == '9')
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}