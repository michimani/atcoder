#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  int x, y;
  cin >> x >> y;

  vector<int> X(n, 0);
  vector<int> Y(m, 0);

  for (auto &xx : X)
    cin >> xx;
  for (auto &yy : Y)
    cin >> yy;

  sort(X.begin(), X.end());
  sort(Y.begin(), Y.end());

  cout << (X[n - 1] < Y[0] && x < Y[0] && Y[0] <= y ? "No War" : "War") << endl;

  return 0;
}