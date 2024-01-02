#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  if (a % 2 == 0 || b % 2 == 0)
  {
    cout << "Even" << endl;
  }
  else
  {
    cout << "Odd" << endl;
  }

  return 0;
}