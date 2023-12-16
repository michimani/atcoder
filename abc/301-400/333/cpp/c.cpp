#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;

void gen(vector<unsigned long long> &choices, unsigned long long num, int cnt, vector<unsigned long long> &list, map<unsigned long long, bool> &used)
{
  if (list.size() == 550)
  {
    return;
  }

  if (cnt == 3)
  {
    if (!used[num])
    {
      list.push_back(num);
      used[num] = true;
    }
    return;
  }

  for (auto &c : choices)
  {
    gen(choices, num + c, cnt + 1, list, used);
  }
}

int main()
{
  vector<unsigned long long> choices = {1};
  for (unsigned int d = 1; d <= 13; d++)
  {
    choices.push_back(choices[d - 1] * 10 + 1);
  }

  vector<unsigned long long> list;
  map<unsigned long long, bool> used;
  for (auto &c : choices)
  {
    gen(choices, c, 1, list, used);
  }

  sort(list.begin(), list.end());

  unsigned int n;
  cin >> n;

  cout << list[n - 1] << endl;

  return 0;
}