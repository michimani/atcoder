#include <iostream>
#include <vector>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  vector<int> pp(3, 0);
  int ans = 0;
  for (unsigned int i = 0; i < n; i++)
  {
    cin >> pp[i % 3];
    if (i < 2)
    {
      continue;
    }

    if ((pp[i % 3] > pp[(i - 1) % 3] && pp[(i - 1) % 3] > pp[(i - 2) % 3]) ||
        (pp[(i - 2) % 3] > pp[(i - 1) % 3] && pp[(i - 1) % 3] > pp[i % 3]))
    {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}