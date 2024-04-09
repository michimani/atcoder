#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  for (ui i = 0; i < m; i++)
  {
    ui a;
    cin >> a;

    if (n < a)
    {
      cout << "-1" << endl;
      return 0;
    }

    n -= a;
  }

  cout << n << endl;
  return 0;
}