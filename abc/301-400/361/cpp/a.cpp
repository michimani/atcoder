#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k, x;
  cin >> n >> k >> x;

  for (ui i = 0; i < n; i++)
  {
    if (i > 0)
      cout << " ";

    ui a;
    cin >> a;
    cout << a;

    if (i + 1 == k)
      cout << " " << x;
  }
  cout << endl;

  return 0;
}