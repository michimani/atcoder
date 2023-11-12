#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
  unsigned int n, k;
  cin >> n >> k;
  vector<unsigned int> range(k + 1, 0);
  map<unsigned int, unsigned int> kind;
  unsigned int ans = 0;

  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int c = 0;
    cin >> c;

    if (kind.count(range[i % (k + 1)]) != 0)
    {
      if (kind[range[i % (k + 1)]] == 1)
      {
        kind.erase(range[i % (k + 1)]);
      }
      else
      {
        kind[range[i % (k + 1)]]--;
      }
    }

    if (kind.count(c) == 0)
    {
      kind[c] = 1;
    }
    else
    {
      kind[c]++;
    }

    range[(i + k) % (k + 1)] = c;
    ans = max(ans, (unsigned int)(kind.size()));
  }

  cout << ans << endl;
}