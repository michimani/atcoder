#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, s;
  cin >> n >> s;

  ui p = 0;
  for (; n--;)
  {
    ui t;
    cin >> t;

    if (t - p > s)
    {
      cout << "No" << endl;
      return 0;
    }

    p = t;
  }

  cout << "Yes" << endl;

  return 0;
}