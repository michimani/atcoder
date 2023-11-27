#include <iostream>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  int x;
  cin >> x;

  int mx = 0;
  int mn = 101;

  int sum = 0;
  for (unsigned int i = 0; i < n - 1; i++)
  {
    int a;
    cin >> a;

    mx = max(mx, a);
    mn = min(mn, a);

    sum += a;
  }

  int s_org = sum - mx - mn;
  for (int an = 0; an <= 100; an++)
  {
    int score = s_org;
    if (an <= mn)
    {
      score += mn;
    }
    else if (an >= mx)
    {
      score += mx;
    }
    else
    {
      score += an;
    }

    if (score >= x)
    {
      cout << an << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}