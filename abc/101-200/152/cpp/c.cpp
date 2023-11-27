#include <iostream>

using namespace std;

int main()
{
  unsigned int n = 0;
  cin >> n;

  unsigned int prev = 0;
  cin >> prev;
  unsigned int ans = 1;
  for (unsigned int i = 0; i < n - 1; i++)
  {
    unsigned int p = 0;
    cin >> p;
    if (p <= prev)
    {
      ans++;
      prev = p;
    }
  }

  cout << ans << endl;
}