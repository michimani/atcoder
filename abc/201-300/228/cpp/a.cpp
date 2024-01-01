#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui s, t, x;
  cin >> s >> t >> x;

  if (t <= s)
  {
    t += 24;

    if (x < s)
    {
      x += 24;
    }
  }

  if (s <= x && x < t)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}