#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
  vector<unsigned long long> choices = {1};
  for (unsigned int d = 1; d <= 12; d++)
  {
    choices.push_back(choices[d - 1] * 10 + 1);
  }

  vector<unsigned long long> list;
  map<unsigned long long, bool> exists;
  for (auto &c : choices)
  {
    for (auto &cc : choices)
    {
      for (auto &ccc : choices)
      {
        unsigned long long num = c + cc + ccc;
        if (!exists[num])
        {
          list.push_back(num);
          exists[num] = true;
        }
      }
    }
  }

  sort(list.begin(), list.end());

  unsigned int n;
  cin >> n;

  cout << list[n - 1] << endl;

  return 0;
}