#include <iostream>

using namespace std;

unsigned long long c(const unsigned long long n, const unsigned long long r)
{
  unsigned long long div = 1;
  unsigned long long res = 1;
  for (unsigned long long i = 0; i < r; i++)
  {
    res *= (n - i);
    if (div <= r && res % div == 0)
    {
      res /= div;
      div++;
    }
  }

  return res;
}

int main()
{
  unsigned long long L = 0;
  cin >> L;

  unsigned long long l = L - 1;

  if (l > 11)
  {
    cout << c(l, 11);
  }
  else
  {
    cout << c(l, l - 11);
  }

  cout << endl;
}