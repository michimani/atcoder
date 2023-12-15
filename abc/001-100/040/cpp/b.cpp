#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int ans = n;
  for (int h = 1; h <= n; h++)
  {
    for (int w = 1; w * h <= n; w++)
    {
      ans = min(ans, (abs(h - w) + (n - h * w)));
    }
  }

  cout << ans << endl;

  return 0;
}