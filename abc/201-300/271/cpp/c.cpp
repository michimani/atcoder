#include <iostream>
#include <vector>

using namespace std;

int main()
{
  unsigned int n = 0;
  cin >> n;

  vector<bool> books(n + 2, false);
  int remaining = 0;

  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int a;
    cin >> a;
    if (a > n)
    {
      remaining++;
      continue;
    }

    if (books[a])
    {
      remaining++;
      continue;
    }

    books[a] = true;
  }

  if (n == 1 && !books[1])
  {
    cout << 0 << endl;
    return 0;
  }

  int ans = 0;
  unsigned long back = books.size() - 1;
  for (unsigned long t = 1; t <= books.size(); t++)
  {
    if (books[t])
    {
      ans++;
      continue;
    }

    if (remaining >= 2)
    {
      ans++;
      remaining -= 2;
      continue;
    }

    int sell = remaining;
    remaining = 0;
    unsigned int checked = 0;
    for (unsigned long bt = back; bt > t; bt--)
    {
      checked++;
      if (books[bt])
      {
        books[bt] = false;
        sell++;
      }
      if (sell == 2)
      {
        break;
      }
    }
    if (sell == 2)
    {
      ans++;
    }
    back -= checked;
  }

  cout << ans << endl;
  return 0;
}