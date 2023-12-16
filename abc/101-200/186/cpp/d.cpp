#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  vector<long long> sums(n, 0);
  vector<long long> A(n, 0);
  for (unsigned int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  sort(A.rbegin(), A.rend());

  for (unsigned int i = 0; i < n; i++)
  {
    if (i == 0)
    {
      sums[i] = A[i];
    }
    else
    {
      sums[i] = sums[i - 1] + A[i];
    }
  }

  long long ans = 0;
  for (unsigned int i = 1; i < n; i++)
  {
    ans += abs(A[i] * (long long)(i)-sums[i - 1]);
  }

  cout << ans << endl;
  return 0;
}