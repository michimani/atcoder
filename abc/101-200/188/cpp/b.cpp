#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<long> a(n, 0);
  for (auto &aa : a)
  {
    cin >> aa;
  }

  long ip = 0;
  for (ui i = 0; i < n; i++)
  {
    long b;
    cin >> b;

    ip += b * a[i];
  }

  if (ip == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}