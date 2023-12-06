#include <iostream>
#include <vector>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  vector<unsigned int> d(100001, 0);
  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int di;
    cin >> di;
    d[di]++;
  }

  unsigned int ans = 0;
  unsigned int count = 0;
  for (auto &dc : d)
  {
    count += dc;
    if (count > n / 2)
    {
      break;
    }
    if (count == n / 2)
    {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}