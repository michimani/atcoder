#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int k, n;
  cin >> k >> n;

  vector<int> A(n, 0);
  int max_a = 0;
  int min_a = INT16_MAX;
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];

    max_a = max(max_a, A[i]);
    min_a = min(min_a, A[i]);
  }

  sort(A.begin(), A.end());
  int ans = max_a - min_a;
  for (unsigned int i = 1; i < A.size(); i++)
  {
    ans = min(ans, A[i - 1] + k - A[i]);
  }

  cout << ans << endl;
}