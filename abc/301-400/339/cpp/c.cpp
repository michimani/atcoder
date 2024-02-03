#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  long u = 0;
  long adj_u = 0;
  long init = 0;
  for (ui i = 0; i < n; i++)
  {
    long a;
    cin >> a;
    u += a;
    adj_u += a;
    if (adj_u < 0)
    {
      init += abs(adj_u);
      adj_u = 0;
    }
  }

  cout << u + init << endl;
  return 0;
}