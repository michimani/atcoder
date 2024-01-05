#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui w = n / 2 + n % 2;

  ui t = 0, a = 0;
  for (ui i = 0; i < n; i++)
  {
    char c;
    cin >> c;

    t += ui(c == 'T');
    a += ui(c == 'A');

    if (t == w)
    {
      cout << "T" << endl;
      return 0;
    }
    if (a == w)
    {
      cout << "A" << endl;
      return 0;
    }
  }

  // noop
  return 0;
}