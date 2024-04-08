#include <iostream>

using namespace std;
using ui = unsigned int;

ui nc2(ui n)
{
  if (n == 0)
    return 0;

  return n * (n - 1) / 2;
}

int main()
{
  ui n, m;
  cin >> n >> m;

  cout << nc2(n) + nc2(m) << endl;
  return 0;
}