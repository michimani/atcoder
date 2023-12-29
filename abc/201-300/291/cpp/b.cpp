#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  vector<double> x(n * 5, 0);
  double sum = 0;
  for (auto &xx : x)
  {
    cin >> xx;
    sum += xx;
  }

  sort(x.begin(), x.end());
  for (unsigned int i = 0; i < n; i++)
  {
    sum -= (x[i] + x[n * 5 - 1 - i]);
  }

  cout << sum / (n * 3) << endl;
  return 0;
}