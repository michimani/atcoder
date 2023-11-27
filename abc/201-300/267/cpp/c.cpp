#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  unsigned long N, M;
  cin >> N >> M;

  vector<long> A(N, 0);
  long prev_ans = 0;
  long prev_b_sum = 0;
  long max_a = 0;
  for (unsigned int i = 0; i < N; i++)
  {
    long a = 0;
    cin >> a;
    A[i] = a;
    if (a > max_a)
    {
      max_a = a;
    }
    if (i < M)
    {
      prev_ans += (long(i + 1) * a);
      prev_b_sum += a;
    }
  }

  if (N == M)
  {
    cout << prev_ans << endl;
    return 0;
  }

  if (M == 1)
  {
    cout << max_a << endl;
    return 0;
  }

  long ans = prev_ans;
  for (unsigned long i = 1; i <= N - M; i++)
  {
    long ans_tmp = prev_ans - prev_b_sum + A[M + i - 1] * long(M);
    prev_b_sum = prev_b_sum - A[i - 1] + A[M + i - 1];

    prev_ans = ans_tmp;

    if (ans_tmp > ans)
    {
      ans = ans_tmp;
    }
  }

  cout << ans << endl;
}