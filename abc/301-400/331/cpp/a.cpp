#include <iostream>

using namespace std;

int main()
{
  int M, D, y, m, d;
  cin >> M >> D >> y >> m >> d;

  int n_d = d + 1;
  int n_m = m;
  int n_y = y;

  if (n_d > D)
  {
    n_d = 1;
    n_m++;

    if (n_m > M)
    {
      n_m = 1;
      n_y++;
    }
  }

  cout << n_y << " " << n_m << " " << n_d << endl;
  return 0;
}