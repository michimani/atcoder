#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<ui> a(10, 0);
  for (auto &aa : a)
    cin >> aa;

  ui i = 0;
  for (ui c = 0; c < 2; c++)
    i = a[i];

  cout << a[i] << endl;

  return 0;
}