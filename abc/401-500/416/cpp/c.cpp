#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

using ui = unsigned int;

int main()
{
  ui n, k, x;
  cin >> n >> k >> x;

  vector<string> s(n);
  for (ui i = 0; i < n; i++)
  {
    cin >> s[i];
  }

  vector<string> results;

  function<void(vector<int> &, int)> generate = [&](vector<int> &seq, ui pos)
  {
    if (pos == k)
    {
      string result = "";
      for (ui i = 0; i < k; i++)
      {
        result += s[seq[i]];
      }
      results.push_back(result);
      return;
    }

    for (ui i = 0; i < n; i++)
    {
      seq[pos] = i;
      generate(seq, pos + 1);
    }
  };

  vector<int> seq(k);
  generate(seq, 0);

  sort(results.begin(), results.end());

  cout << results[x - 1] << endl;

  return 0;
}
