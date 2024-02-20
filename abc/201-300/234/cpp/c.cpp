#include <iostream>
#include <deque>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull k;
  cin >> k;

  deque<int> ds;
  while (k > 0)
  {
    ds.push_front(k % 2);
    k /= 2;
  }

  if (ds.front() == 0)
    ds.pop_front();

  for (auto d : ds)
    cout << d * 2;

  cout << endl;

  return 0;
}