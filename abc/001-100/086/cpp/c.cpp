#include <iostream>

using namespace std;

int main()
{
  int N = 0;
  cin >> N;

  string ans = "Yes";

  int prev_t = 0, prev_x = 0, prev_y = 0;
  for (int i = 0; i < N; i++)
  {
    int t, x, y;
    cin >> t >> x >> y;

    int dt = t - prev_t;
    int dx = x - prev_x;
    int dy = y - prev_y;

    int d = dx + dy;
    if (abs(d) > dt)
    {
      ans = "No";
      break;
    }

    if (d == 0 && dt % 2 != 0)
    {
      ans = "No";
      break;
    }

    if (abs(d) % 2 != dt % 2)
    {
      ans = "No";
      break;
    }

    prev_t = t;
    prev_x = x;
    prev_y = y;
  }

  cout << ans << endl;
}