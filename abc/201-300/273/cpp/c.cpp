#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  vector<unsigned int> A;
  map<unsigned int, unsigned int> e;
  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int a;
    cin >> a;

    e[a]++;
    if (e[a] > 1)
    {
      continue;
    }

    A.push_back(a);
  }

  sort(A.begin(), A.end());

  map<unsigned int, unsigned int> lc;
  for (unsigned int i = 1; i <= A.size(); i++)
  {
    lc[(unsigned int)(A.size() - i)] = e[A[i - 1]];
  }

  for (unsigned int i = 1; i <= n; i++)
  {
    unsigned int k = i - 1;
    cout << lc[k] << endl;
  }

  return 0;
}