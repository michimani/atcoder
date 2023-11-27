#include <iostream>

using namespace std;

int main()
{
  unsigned int n, l;
  cin >> n >> l;

  unsigned int ans = 0;
  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int a;
    cin >> a;

    ans += (unsigned int)(a >= l);
  }

  cout << ans << endl;
  return 0;
}