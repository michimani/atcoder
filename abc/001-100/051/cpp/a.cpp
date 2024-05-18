#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui l = 19;
  for (; l--;)
  {
    char c;
    cin >> c;
    if (c == ',')
      cout << " ";
    else
      cout << c;
  }
  cout << endl;

  return 0;
}