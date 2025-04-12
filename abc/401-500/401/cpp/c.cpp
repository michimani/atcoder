#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ull n, k;
  cin >> n >> k;

  ull div = 1000000000;

  vector<ull> a_sum_src(k, 1);
  ull a_sum = k % div;
  ull a = 1;
  for (ui i = k; i <= n; i++)
  {
    a = a_sum;
    a_sum = ((a_sum - a_sum_src[i % k] + div) % div + a % div) % div;
    a_sum_src[i % k] = a;
  }

  cout << a % div << endl;

  return 0;
}