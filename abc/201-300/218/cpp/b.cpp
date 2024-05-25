#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui l = 26;
  for (; l--;)
  {
    int p;
    cin >> p;
    cout << char(p + 'a' - 1);
  }

  cout << endl;

  return 0;
}