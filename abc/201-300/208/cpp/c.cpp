#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
  long long N = 0, K = 0;
  cin >> N >> K;

  vector<long long> nums;
  map<long long, long long> nums_idx_map;
  map<long long, long long> nums_count_map;
  for (long long i = 0; i < N; i++)
  {
    long long a = 0;
    cin >> a;
    nums.push_back(a);
    nums_idx_map[i] = a;
    nums_count_map[a] = 0;
  }

  sort(nums.begin(), nums.end());

  long long base = K / N;
  long long remain = K - (N * base);
  for (auto &num : nums)
  {
    if (remain == 0)
    {
      break;
    }
    nums_count_map[num]++;
    remain--;
  }

  for (long long i = 0; i < N; i++)
  {
    cout << nums_count_map[nums_idx_map[i]] + base << endl;
  }
}