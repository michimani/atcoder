#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui l, r;
  cin >> l >> r;

  if (l == r)
  {
    cout << "Invalid" << endl;
    return 0;
  }

  if (l == 1)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}