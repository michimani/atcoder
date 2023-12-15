#include <iostream>
#include <vector>

using namespace std;

int main()
{
  unsigned int n, q;
  cin >> n >> q;

  vector<int> player(n + 1, 0);
  for (unsigned int i = 0; i < q; i++)
  {
    unsigned int c, x;
    cin >> c >> x;

    if (c == 1)
    {
      player[x]++;
    }
    else if (c == 2)
    {
      player[x] += 2;
    }
    else if (c == 3)
    {
      if (player[x] >= 2)
      {
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
    }
    else
    {
      // noop
    }
  }

  return 0;
}