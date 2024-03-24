#include <iostream>
#include <list>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  list<double> v(n, 0);
  for (auto &vv : v)
    cin >> vv;

  v.sort();

  while (v.size() > 1)
  {
    double v1 = v.front();
    v.pop_front();
    double v2 = v.front();
    v.pop_front();

    v.push_back((v1 + v2) / 2);
    v.sort();
  }

  cout << v.front() << endl;
  return 0;
}