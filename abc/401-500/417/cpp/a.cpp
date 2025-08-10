#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, a, b;
  cin >> n >> a >> b;

  char c;
  for (ui i = 0; i < n - b; i++)
  {
    cin >> c;
    if (i < a)
      continue;

    cout << c;
  }

  cout << endl;

  return 0;
}