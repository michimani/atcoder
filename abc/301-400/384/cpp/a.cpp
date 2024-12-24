#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  char a, b;
  cin >> a >> b;

  for (; n--;)
  {
    char c;
    cin >> c;

    if (c != a)
      c = b;

    cout << c;
  }

  cout << endl;

  return 0;
}