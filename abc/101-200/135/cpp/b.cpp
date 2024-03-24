#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui d = 0;
  for (ui i = 1; i <= n; i++)
  {
    ui p;
    cin >> p;

    d += ui(i != p);
    if (d > 2)
    {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
  return 0;
}