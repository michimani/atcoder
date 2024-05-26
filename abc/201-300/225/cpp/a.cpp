#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<char, bool> cm;
  for (ui i = 0; i < 3; i++)
  {
    char c;
    cin >> c;
    cm[c] = true;
  }

  switch (cm.size())
  {
  case 1:
    cout << 1 << endl;
    break;

  case 2:
    cout << 3 << endl;
    break;

  case 3:
    cout << 6 << endl;
    break;

  default:
    break;
  }

  return 0;
}