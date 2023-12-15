#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void gen(unsigned int &len, string s, unsigned int pos, vector<bool> used, vector<string> &dict)
{
  s += to_string(pos + 1);
  used[pos] = true;

  if (s.length() == len)
  {
    dict.push_back(s);
    return;
  }

  for (unsigned int i = 0; i < used.size(); i++)
  {
    if (used[i])
    {
      continue;
    }

    gen(len, s, i, used, dict);
  }
}

int main()
{
  unsigned int n;
  cin >> n;

  vector<string> dict;
  for (unsigned int i = 0; i < n; i++)
  {
    vector<bool> used(n, false);
    string s = "";
    gen(n, s, i, used, dict);
  }

  sort(dict.begin(), dict.end());

  map<string, unsigned int> so;
  unsigned int ord = 1;
  for (auto &s : dict)
  {
    so[s] = ord;
    ord++;
  }

  string p(n, '.');
  for (unsigned int i = 0; i < n; i++)
  {
    cin >> p[i];
  }

  string q(n, '.');
  for (unsigned int i = 0; i < n; i++)
  {
    cin >> q[i];
  }

  unsigned int ans = 0;
  if (so[p] > so[q])
  {
    ans = so[p] - so[q];
  }
  else
  {
    ans = so[q] - so[p];
  }

  cout << ans << endl;

  return 0;
}