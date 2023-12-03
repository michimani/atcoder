#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  unsigned int n, d;
  cin >> n >> d;

  string b(d, 'o');
  for (unsigned int i = 0; i < n; i++)
  {
    for (unsigned int j = 0; j < d; j++)
    {
      char s;
      cin >> s;
      b[j] = b[j] == 'o' && s == 'o' ? 'o' : 'x';
    }
  }

  int ans = 0;
  int tmp = 0;
  for (unsigned int i = 0; i < d; i++)
  {
    if (b[i] == 'x')
    {
      ans = max(ans, tmp);
      tmp = 0;
    }
    else
    {
      tmp++;
    }
  }
  ans = max(ans, tmp);

  cout << ans << endl;
  return 0;
}