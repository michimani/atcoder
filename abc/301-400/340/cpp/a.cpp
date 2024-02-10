#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, d;
  cin >> a >> b >> d;

  for (ui i = a; i <= b; i += d)
  {
    if (i != a)
    {
      cout << " ";
    }
    cout << i;
  }
  cout << endl;

  return 0;
}