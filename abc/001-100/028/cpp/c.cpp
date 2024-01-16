#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<ui> nums(5, 0);
  for (auto &n : nums)
  {
    cin >> n;
  }

  map<ui, bool> s;
  for (ui i = 0; i < 5; i++)
  {
    for (ui j = i + 1; j < 5; j++)
    {
      for (ui k = j + 1; k < 5; k++)
      {
        s[nums[i] + nums[j] + nums[k]];
      }
    }
  }

  auto it = s.rbegin();
  it++;
  it++;

  cout << it->first << endl;
  return 0;
}