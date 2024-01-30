#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  int n, k, m;
  cin >> n >> k >> m;

  int sum = 0;
  for (ui i = 0; i < ui(n) - 1; i++)
  {
    ui a;
    cin >> a;
    sum += a;
  }

  int x = max(0, m * n - sum);
  if (x > k)
  {
    cout << "-1" << endl;
    return 0;
  }

  cout << x << endl;
  return 0;
}