#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui f = 0, a = 0;
  for (ui i = 0; i < n; i++)
  {
    string s;
    cin >> s;

    f += ui(s == "For");
    a += ui(s == "Against");

    if (f > n / 2)
    {
      cout << "Yes" << endl;
      return 0;
    }

    if (a > n / 2)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  return 0;
}