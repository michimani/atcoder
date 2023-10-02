#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> nums;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    nums.push_back(a);
  }

  sort(nums.rbegin(), nums.rend());

  int ans = 0;
  for (unsigned long i = 0; i < nums.size(); i++)
  {
    if (i % 2 == 0)
    {
      ans += nums[i];
    }
    else
    {
      ans -= nums[i];
    }
  }

  cout << ans << endl;
  return 0;
}