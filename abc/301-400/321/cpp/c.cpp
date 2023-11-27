#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void gen_321_nums(vector<unsigned long long> &list, unsigned long long num, int n, unsigned int digit)
{
  if (n == 0 && num == 0)
  {
    return;
  }

  if (n < 0)
  {
    list.push_back(num);
    return;
  }

  gen_321_nums(list, num * 10 + (unsigned long long)(n), n - 1, digit + 1);
  gen_321_nums(list, num, n - 1, digit);
}

int main()
{
  vector<unsigned long long> list;
  gen_321_nums(list, 0, 9, 0);

  sort(list.begin(), list.end());

  unsigned long long k = 0;
  cin >> k;

  cout << list[k - 1] << endl;
}