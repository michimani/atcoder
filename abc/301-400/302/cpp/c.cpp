#include <iostream>
#include <vector>

using namespace std;

bool generable(unsigned int &n, unsigned int &m, vector<string> &s, vector<string> t, unsigned int pos, vector<bool> chosen)
{
  if (pos == n - 1)
  {
    return true;
  }

  bool ok = false;
  for (unsigned int i = 0; i < n; i++)
  {
    if (chosen[i])
    {
      continue;
    }

    int diff = 0;
    for (unsigned int k = 0; k < m; k++)
    {
      if (s[i][k] != t[pos][k])
      {
        diff++;
        if (diff > 1)
        {
          break;
        }
      }
    }
    if (diff == 1)
    {
      vector<string> t_tmp = t;
      vector<bool> chosen_tmp = chosen;
      t_tmp[pos + 1] = s[i];
      chosen_tmp[i] = true;
      ok = ok || generable(n, m, s, t_tmp, (pos + 1) % n, chosen_tmp);
    }
  }

  return ok;
}

int main()
{
  unsigned int n, m;
  cin >> n >> m;
  vector<string> s(n, string(m, '.'));
  for (auto &ss : s)
  {
    cin >> ss;
  }

  bool ok = false;
  for (unsigned int i = 0; i < n; i++)
  {
    vector<string> t(n, string(m, '.'));
    t[0] = s[i];
    vector<bool> chosen(n, false);
    chosen[i] = true;
    ok = generable(n, m, s, t, 0, chosen);
    if (ok)
    {
      break;
    }
  }

  if (ok)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}