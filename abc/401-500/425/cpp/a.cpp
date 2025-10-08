#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int ans = 0;
  for (int i = 1; i <= n; i++)
    ans += pow(-1, i) * pow(i, 3);

  cout << ans << endl;

  return 0;
}