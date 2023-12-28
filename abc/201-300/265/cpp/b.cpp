#include <iostream>
#include <vector>

using namespace std;

int main()
{
  unsigned int n, m, t;
  cin >> n >> m >> t;

  vector<unsigned int> a(n, 0);
  vector<unsigned int> b(n + 1, 0);

  for (unsigned int i = 1; i < n; i++)
  {
    cin >> a[i];
  }

  for (unsigned int i = 0; i < m; i++)
  {
    unsigned int x;
    unsigned int y;
    cin >> x >> y;
    b[x] = y;
  }

  unsigned int p = 1;
  while (true)
  {
    if (t <= a[p] || p == n)
    {
      break;
    }

    t -= a[p];
    p++;
    t += b[p];
  }

  if (p == n)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}