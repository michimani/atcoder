#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<int> ae;
  vector<int> ao;
  for (ui i = 0; i < n; i++)
  {
    int a;
    cin >> a;

    if (a % 2 == 0)
      ae.push_back(a);
    else
      ao.push_back(a);
  }

  int ans = -1;
  if (ae.size() > 1)
  {
    sort(ae.rbegin(), ae.rend());
    ans = max(ans, ae[0] + ae[1]);
  }
  if (ao.size() > 1)
  {
    sort(ao.rbegin(), ao.rend());
    ans = max(ans, ao[0] + ao[1]);
  }

  cout << ans << endl;
  return 0;
}