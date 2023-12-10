#include <iostream>

using namespace std;

int main()
{
  unsigned int n, s, k;
  cin >> n >> s >> k;

  unsigned int sum = 0;
  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int p, q;
    cin >> p >> q;

    sum += p * q;
  }

  if (sum < s)
  {
    sum += k;
  }

  cout << sum << endl;
  return 0;
}