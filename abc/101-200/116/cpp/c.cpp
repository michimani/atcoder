#include <iostream>
#include <vector>

using namespace std;

void water(vector<vector<unsigned int>> kadans, unsigned int &ans)
{
  for (auto &kadan : kadans)
  {
    unsigned int min = 101;
    for (auto &h : kadan)
    {
      if (h < min)
      {
        min = h;
      }
    }
    ans += min;

    vector<vector<unsigned int>> new_kadans;
    vector<unsigned int> new_kadan(0);
    for (auto &h : kadan)
    {
      h -= min;
      if (h == 0)
      {
        if (new_kadan.size() > 0)
        {
          new_kadans.push_back(new_kadan);
          new_kadan = vector<unsigned int>(0);
        }
        continue;
      }

      new_kadan.push_back(h);
    }
    if (new_kadan.size() > 0)
    {
      new_kadans.push_back(new_kadan);
    }

    water(new_kadans, ans);
  }
}

int main()
{
  unsigned int n;
  cin >> n;

  vector<vector<unsigned int>> kadans;
  vector<unsigned int> kadan(0);
  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int h;
    cin >> h;

    if (h == 0)
    {
      if (kadan.size() > 0)
      {
        kadans.push_back(kadan);
        kadan = vector<unsigned int>(0);
      }

      continue;
    }

    kadan.push_back(h);
  }
  if (kadan.size() > 0)
  {
    kadans.push_back(kadan);
  }

  unsigned int ans = 0;
  water(kadans, ans);

  cout << ans << endl;
  return 0;
}