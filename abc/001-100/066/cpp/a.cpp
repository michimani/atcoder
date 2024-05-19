#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<ui> p(3, 0);
  for (auto &pp : p)
    cin >> pp;

  sort(p.begin(), p.end());

  cout << p[0] + p[1] << endl;

  return 0;
}