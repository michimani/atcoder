#include <iostream>

using namespace std;

int main()
{
  long long X = 0, K = 0, D = 0;
  cin >> X >> K >> D;

  long long k = abs(X) / D;
  if (K < k)
  {
    k = K;
  }
  else if ((K - k) % 2 == 1)
  {
    k++;
  }

  cout << abs(abs(X) - D * k) << endl;
}