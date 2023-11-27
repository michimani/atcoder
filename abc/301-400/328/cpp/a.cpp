#include <iostream>

using namespace std;

int main()
{
  int n = 0, x = 0;
  cin >> n >> x;

  unsigned int ans = 0;
  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int s = 0;
    cin >> s;
    if (s <= x)
    {
      ans += s;
    }
  }

  cout << ans << endl;
}