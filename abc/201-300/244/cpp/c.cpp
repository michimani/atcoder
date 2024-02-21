#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, bool> nums;
  for (ui i = 1; i <= 2 * n + 1; i++)
    nums[i] = true;

  ui a = n;
  while (true)
  {
    ui t = nums.begin()->first;
    cout << t << endl;
    nums.erase(t);

    cin >> a;
    if (a == 0)
      break;

    nums.erase(a);
  }

  return 0;
}