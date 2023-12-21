#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
  unsigned int n, d;
  unsigned long long p;
  cin >> n >> d >> p;

  vector<unsigned long long> f(n, 0);
  unsigned long long sum = 0;
  for (unsigned int i = 0; i < n; i++)
  {
    cin >> f[i];
    sum += f[i];
  }

  sort(f.rbegin(), f.rend());

  for (unsigned int i = 0; i < n; i += d)
  {
    unsigned long long part_sum = 0;
    for (unsigned int ii = i; ii < min(n, i + d); ii++)
    {
      part_sum += f[ii];
    }

    if (part_sum <= p)
    {
      break;
    }
    sum = sum - part_sum + p;
  }

  cout << sum << endl;
}