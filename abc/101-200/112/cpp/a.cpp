#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  if (n == 1)
  {
    cout << "Hello World" << endl;
    return 0;
  }

  ui a, b;
  cin >> a >> b;

  cout << a + b << endl;

  return 0;
}