#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> q(n, 0);
  for (ui i = 0; i < n; i++)
  {
    ui p;
    cin >> p;

    q[p - 1] = i + 1;
  }

  for (ui i = 0; i < n; i++)
  {
    if (i > 0)
    {
      cout << " ";
    }
    cout << q[i];
  }
  cout << endl;

  return 0;
}