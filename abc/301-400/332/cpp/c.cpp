#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  unsigned int N;
  int M;
  cin >> N >> M;

  int l = 0;
  int lmx = 0;
  int lm = 0;
  int lmmx = 0;
  int max_t = 0;
  int t = 0;
  for (unsigned int i = 0; i < N; i++)
  {
    char s;
    cin >> s;

    if (s == '1')
    {
      t++;
      lm++;
    }
    else if (s == '2')
    {
      t++;
      l++;
    }
    else
    {
      max_t = max(max_t, t);
      t = 0;
      lmx = max(lmx, l);
      lmmx = max(lmmx, lm);
      l = 0;
      lm = 0;
    }
  }
  lmx = max(lmx, l);
  lmmx = max(lmmx, lm);
  max_t = max(max_t, t);

  int ans = lmx + max(0, max_t - lmx - M);

  cout << ans << endl;
  return 0;
}
