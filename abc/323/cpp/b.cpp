#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(const tuple<int, int> &lhs, const tuple<int, int> &rhs)
{
  if (std::get<1>(lhs) != std::get<1>(rhs))
  {
    return std::get<1>(lhs) < std::get<1>(rhs);
  }
  return std::get<0>(lhs) > std::get<0>(rhs);
}

int main()
{
  int N = 0;
  cin >> N;

  vector<tuple<int, int>> u;

  for (int i = 0; i < N; i++)
  {
    string s = "";
    cin >> s;
    int c = 0;
    for (unsigned long si = 0; si < s.length(); si++)
    {
      if (s[si] == 'o')
      {
        c++;
      }
    }

    u.push_back({i + 1, c});
  }

  sort(u.rbegin(), u.rend(), comp);

  for (unsigned long i = 0; i < u.size(); i++)
  {
    if (i > 0)
    {
      cout << " ";
    }
    cout << get<0>(u[i]);
  }

  cout << endl;
}