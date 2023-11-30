#include <iostream>
#include <map>
#include <vector>

using namespace std;

void gather(vector<vector<unsigned int>> &a_list, unsigned int a, map<unsigned int, bool> &todo)
{
  for (auto &aa : a_list[a - 1])
  {
    if (todo.count(aa) != 0)
    {
      continue;
    }
    todo[aa] = true;
    gather(a_list, aa, todo);
  }

  return;
}

int main()
{
  unsigned int n;
  cin >> n;
  vector<unsigned long long> t_list(n, 0);
  vector<vector<unsigned int>> a_list(n, vector<unsigned int>(0));
  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int k;
    cin >> t_list[i] >> k;
    for (unsigned int j = 0; j < k; j++)
    {
      unsigned int a;
      cin >> a;
      a_list[i].push_back(a);
    }
  }

  map<unsigned int, bool> todo;
  gather(a_list, n, todo);
  unsigned long long ans = t_list[n - 1];

  auto iter = todo.begin();
  while (iter != todo.end())
  {
    ans += t_list[iter->first - 1];
    iter++;
  }

  cout << ans << endl;
  return 0;
}