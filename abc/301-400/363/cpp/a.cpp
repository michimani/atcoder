#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui r;
  cin >> r;

  if (r < 100)
    cout << 100 - r << endl;
  else if (r < 200)
    cout << 200 - r << endl;
  else if (r < 300)
    cout << 300 - r << endl;
  else
    cout << 400 - r << endl;

  return 0;
}