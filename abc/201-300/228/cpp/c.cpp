#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  unsigned int n = 0;
  unsigned int k = 0;
  cin >> n >> k;

  vector<int> P(n, 0);
  vector<int> Ps(n, 0);
  for (unsigned int i = 0; i < n; i++)
  {
    int sum = 0;
    for (int j = 0; j < 3; j++)
    {
      int p = 0;
      cin >> p;
      sum += p;
    }
    P[i] = sum;
    Ps[i] = sum;
  }

  sort(Ps.rbegin(), Ps.rend());
  int pk = Ps[k - 1];

  for (auto &p : P)
  {
    if (p + 300 >= pk)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }
}