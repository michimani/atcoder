#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w;
  cin >> h >> w;

  vector<ui> ans(w, 0);
  for (ui i = 0; i < h; i++)
  {
    for (ui j = 0; j < w; j++)
    {
      char c;
      cin >> c;

      ans[j] += ui(c == '#');
    }
  }

  for (ui i = 0; i < w; i++)
  {
    if (i > 0)
      cout << " ";
    cout << ans[i];
  }

  cout << endl;

  return 0;
}