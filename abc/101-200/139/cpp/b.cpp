#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  ui s = 1;
  ui c = 0;
  while (s < b)
  {
    s = s - 1 + a;
    c++;
  }

  cout << c << endl;
  return 0;
}