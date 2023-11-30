#include <iostream>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  unsigned int ans = 0;
  unsigned int prev_h = 0;
  unsigned int prev_pos = 0;
  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int h;
    cin >> h;
    if (h > prev_h && (i == 0 || i - 1 == prev_pos))
    {
      ans = h;
    }
    else
    {
      break;
    }

    prev_h = h;
    prev_pos = i;
  }

  cout << ans << endl;
  return 0;
}