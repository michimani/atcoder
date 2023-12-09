#include <iostream>
#include <map>

using namespace std;

int main()
{
  int n;
  cin >> n;

  map<int, bool> nums;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;

    if (nums.count(a) > 0)
    {
      cout << "No" << endl;
      return 0;
    }

    nums[a] = true;
  }

  cout << "Yes" << endl;
  return 0;
}