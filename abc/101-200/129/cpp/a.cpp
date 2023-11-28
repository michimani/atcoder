#include <iostream>

using namespace std;

int main()
{
  int mx = 0;
  int ans = 0;
  for (unsigned int i = 0; i < 3; i++)
  {
    int n;
    cin >> n;
    if (n > mx)
    {
      mx = n;
    }
    ans += n;
  }

  ans -= mx;

  cout << ans << endl;
  return 0;
}