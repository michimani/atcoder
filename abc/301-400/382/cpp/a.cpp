#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, d;
  cin >> n >> d;

  ui a = 0;
  char c;
  for (ui i = 0; i < n; i++)
  {
    cin >> c;
    a += (c == '@');
  }

  cout << (n - a) + d << endl;

  return 0;
}