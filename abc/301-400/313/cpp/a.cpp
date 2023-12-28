#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int n1;
  cin >> n1;

  int nx = 0;
  for (int i = 0; i < n - 1; i++)
  {
    int p;
    cin >> p;
    nx = max(nx, p);
  }

  cout << max(0, nx + 1 - n1) << endl;
  return 0;
}