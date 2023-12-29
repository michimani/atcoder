#include <iostream>
#include <vector>

using namespace std;

int main()
{
  unsigned int n, m;
  cin >> n >> m;

  vector<unsigned int> a(n, 0);
  for (auto &aa : a)
  {
    cin >> aa;
  }

  unsigned int sum = 0;
  for (unsigned int i = 0; i < m; i++)
  {
    unsigned int b;
    cin >> b;

    sum += a[b - 1];
  }

  cout << sum << endl;
  return 0;
}