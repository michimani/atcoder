#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  ui sum = 0;
  vector<ui> a(n, 0);
  for (auto &aa : a)
  {
    cin >> aa;
    sum += aa;
  }

  ui ans = 0;
  for (auto &aa : a)
    ans += ui(aa * (4 * m) >= sum);

  cout << (ans >= m ? "Yes" : "No") << endl;
  return 0;
}