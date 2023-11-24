#include <iostream>

using namespace std;

int main()
{
  unsigned int n, q;
  cin >> n >> q;

  string s;
  cin >> s;

  unsigned int d = 0;
  for (unsigned int i = 0; i < q; i++)
  {
    unsigned int a, x;
    cin >> a >> x;

    if (a == 1)
    {
      d += (n - x);
      d = d % n;
    }
    else
    {
      cout << s[(x - 1 + d) % n] << endl;
    }
  }

  return 0;
}