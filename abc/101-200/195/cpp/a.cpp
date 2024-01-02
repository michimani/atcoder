#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui m, h;
  cin >> m >> h;

  if (h % m == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}