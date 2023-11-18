#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  map<unsigned int, bool> exists;
  vector<unsigned int> A;
  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int a;
    cin >> a;

    if (!exists[a])
    {
      exists[a] = true;
      A.push_back(a);
    }
  }

  sort(A.rbegin(), A.rend());

  cout << A[1] << endl;

  return 0;
}