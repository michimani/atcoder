#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, bool> am;
  ui ans = 0;
  for (; n--;)
  {
    ui a;
    cin >> a;

    ans += ui(am[a]);
    am[a] = true;
  }

  cout << ans << endl;

  return 0;
}