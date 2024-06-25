#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui ans = 0;
  vector<ui> cur(3, 0);
  for (ui i = 0; i < n * 2; i++)
  {
    cin >> cur[i % 3];
    if (i < 2)
      continue;
    ans += ui(cur[(i - 2) % 3] == cur[i % 3]);
  }

  cout << ans << endl;

  return 0;
}