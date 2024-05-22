#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui r;
  cin >> r;

  if (r < 1200)
    cout << "ABC" << endl;
  else if (r < 2800)
    cout << "ARC" << endl;
  else
    cout << "AGC" << endl;

  return 0;
}