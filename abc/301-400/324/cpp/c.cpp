#include <iostream>
#include <vector>

using namespace std;

int main()
{
  unsigned int N = 0;
  string td = "";
  cin >> N >> td;
  unsigned int td_len = td.size();

  vector<unsigned int> ans;

  for (unsigned int i = 0; i < N; i++)
  {
    string s = "";
    cin >> s;

    unsigned int s_len = s.size();
    if (abs(int(s_len - td_len)) > 1)
    {
      continue;
    }

    if (s == td)
    {
      ans.push_back(i + 1);
      continue;
    }

    if (s_len < td_len)
    {
      int dif = 0;
      for (unsigned int i = 0; i < td_len; i++)
      {
        if (td[i + dif] != s[i])
        {
          dif++;
          if (i + dif < td_len && td[i + dif] != s[i])
          {
            dif++;
            break;
          }
        }
      }
      if (dif == 1)
      {
        ans.push_back(i + 1);
      }
      continue;
    }

    if (s_len > td_len)
    {
      int dif = 0;
      for (unsigned int i = 0; i < s_len; i++)
      {
        if (td[i] != s[i + dif])
        {
          dif++;
          if (i + dif < s_len && td[i] != s[i + dif])
          {
            dif++;
            break;
          }
        }
      }
      if (dif == 1)
      {
        ans.push_back(i + 1);
      }
      continue;
    }

    int dif = 0;
    for (unsigned int i = 0; i < s_len; i++)
    {
      if (td[i] != s[i])
      {
        dif++;
      }
      if (dif > 1)
      {
        break;
      }
    }
    if (dif == 1)
    {
      ans.push_back(i + 1);
    }
  }

  cout << ans.size() << endl;
  for (unsigned int i = 0; i < ans.size(); i++)
  {
    if (i > 0)
    {
      cout << " ";
    }
    cout << ans[i];
  }
  cout << endl;
}