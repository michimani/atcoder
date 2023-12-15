#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
  unsigned int n, k;
  cin >> n >> k;
  vector<unsigned int> trees(n, 0);
  for (auto &h : trees)
  {
    cin >> h;
  }

  sort(trees.rbegin(), trees.rend());

  unsigned int ans = trees[0];
  for (unsigned int i = 0; i <= n - k; i++)
  {
    unsigned int hmx = trees[i];
    unsigned int hmn = trees[i + k - 1];
    ans = min(ans, hmx - hmn);
  }

  cout << ans << endl;

  return 0;
}