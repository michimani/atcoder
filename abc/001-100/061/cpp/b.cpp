#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<ui> c(n, 0);
  for (; m--;)
  {
    ui a, b;
    cin >> a >> b;

    c[a - 1]++;
    c[b - 1]++;
  }

  for (auto &i : c)
    cout << i << endl;

  return 0;
}