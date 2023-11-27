#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int k = 0;
  unsigned int n = 0;
  cin >> k >> n;

  vector<int> A(n, 0);
  for (unsigned int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  sort(A.begin(), A.end());
  int ans = A[A.size() - 1] - A[0];
  for (unsigned int i = 1; i < A.size(); i++)
  {
    ans = min(ans, A[i - 1] + k - A[i]);
  }

  cout << ans << endl;
}