#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  if (a > b)
    swap(a, b);

  cout << (a * 2 == b || a * 2 + 1 == b ? "Yes" : "No") << endl;
  return 0;
}