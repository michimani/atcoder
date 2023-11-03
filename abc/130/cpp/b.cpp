#include <iostream>
#include <vector>

using namespace std;

int main()
{
  unsigned int n, x;
  cin >> n >> x;

  vector<unsigned int> L(n, 1);
  for (auto &l : L)
  {
    cin >> l;
  }

  unsigned int d = 0;
  int ans = 1;
  for (unsigned int i = 0; i < n; i++)
  {
    d = d + L[i];

    if (d > x)
    {
      break;
    }
    ans++;
  }

  cout << ans << endl;
}