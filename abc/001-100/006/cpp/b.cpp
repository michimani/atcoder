#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<unsigned long> q{0, 0, 1};
  unsigned long n = 0;
  cin >> n;

  if (n < 3)
  {
    cout << 0 << endl;
    return 0;
  }

  if (n == 3)
  {
    cout << 1 << endl;
    return 0;
  }

  unsigned long v = 0;
  for (unsigned long i = 3; i < n; i++)
  {
    v = (q[i - 3] + q[i - 2] + q[i - 1]) % 10007;
    q.push_back(v);
  }

  cout << v << endl;
}