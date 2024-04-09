#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> m(n, 0);
  for (ui i = 0; i < n - 1; i++)
  {
    ui a;
    cin >> a;
    m[a - 1]++;
  }

  for (auto mm : m)
    cout << mm << endl;

  return 0;
}