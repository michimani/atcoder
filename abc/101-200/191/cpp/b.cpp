#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, x;
  cin >> n >> x;

  bool o = false;
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;
    if (a == x)
      continue;

    if (o)
      cout << " ";

    cout << a;
    o = true;
  }

  cout << endl;

  return 0;
}