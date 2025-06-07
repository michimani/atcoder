#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, l;
  cin >> n >> l;

  vector<ui> d(n - 1);
  for (ui i = 0; i < n - 1; i++)
  {
    cin >> d[i];
  }

  vector<long long> pos(n);
  pos[0] = 0;
  for (ui i = 1; i < n; i++)
    pos[i] = (pos[i - 1] + d[i - 1]) % l;

  if (l % 3 != 0)
  {
    cout << 0 << endl;
    return 0;
  }

  long long step = l / 3;

  vector<ui> count(l, 0);
  for (ui i = 0; i < n; i++)
    count[pos[i]]++;

  long long result = 0;

  for (ui i = 0; i < l; i++)
  {
    if (count[i] == 0)
      continue;

    ui pos2 = (i + step) % l;
    ui pos3 = (i + 2 * step) % l;

    if (i != pos2 && pos2 != pos3 && pos3 != i)
      result += (long long)count[i] * count[pos2] * count[pos3];
    else if (i == pos2 && pos2 != pos3)
      result += (long long)count[i] * (count[i] - 1) / 2 * count[pos3];
    else if (pos2 == pos3 && pos3 != i)
      result += (long long)count[i] * count[pos2] * (count[pos2] - 1) / 2;
    else if (pos3 == i && i != pos2)
      result += (long long)count[i] * (count[i] - 1) / 2 * count[pos2];
    else if (i == pos2 && pos2 == pos3)
      result += (long long)count[i] * (count[i] - 1) * (count[i] - 2) / 6;
  }

  result /= 3;

  cout << result << endl;

  return 0;
}