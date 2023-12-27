#include <iostream>
#include <vector>

using namespace std;

int main()
{
  unsigned int n;
  int l;
  cin >> n >> l;

  int min_abs = 300;
  int min_n = 0;
  int all = 0;
  vector<int> apples(n, 0);
  for (unsigned int i = 0; i < n; i++)
  {
    apples[i] = l + int(i + 1) - 1;
    all += apples[i];
    if (abs(apples[i]) < min_abs)
    {
      min_abs = abs(apples[i]);
      min_n = i;
    }
  }

  int ans = all - apples[min_n];
  cout << ans << endl;

  return 0;
}