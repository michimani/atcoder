#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  unsigned long N = 0;
  cin >> N;

  double digits = log10(N);
  unsigned long ans = 0;
  double curr_digit = 3;
  while (digits >= curr_digit)
  {
    ans += N - (unsigned long)(pow(10, int(curr_digit))) + 1;
    curr_digit += 3;
  }

  cout << ans << endl;
}