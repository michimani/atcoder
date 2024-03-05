#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<ui> abc(3, 0);
  for (auto &x : abc)
    cin >> x;

  sort(abc.begin(), abc.end());

  ui ans = 0;
  while (abc[0] != abc[1] || abc[1] != abc[2] || abc[2] != abc[0])
  {
    if (abc[0] != abc[1])
    {
      abc[0] += 2;
    }
    else
    {
      abc[0]++;
      abc[1]++;
    }

    ans++;
    sort(abc.begin(), abc.end());
  }

  cout << ans << endl;
  return 0;
}