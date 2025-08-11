#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> d(n - 1);
  for (auto &dd : d)
    cin >> dd;

  ui p = 0;
  for (ui i = 0; i < n - 1; i++)
  {
    p = d[i];
    cout << p;
    for (ui j = i + 1; j < n - 1; j++)
    {
      p += d[j];
      cout << " " << p;
    }
    cout << endl;
  }

  return 0;
}