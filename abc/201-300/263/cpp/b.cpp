#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, ui> p;
  for (ui i = 2; i <= n; i++)
  {
    ui pi;
    cin >> pi;
    p[i] = pi;
  }

  ui c = p[n];
  ui ans = 1;
  while (c != 1)
  {
    c = p[c];
    ans++;
  }

  cout << ans << endl;
  return 0;
}