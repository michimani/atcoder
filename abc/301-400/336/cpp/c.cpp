#include <iostream>
#include <deque>

using namespace std;
using ul = unsigned long;

int main()
{
  ul n;
  cin >> n;

  if (n == 1)
  {
    cout << 0 << endl;
    return 0;
  }

  n--;

  deque<int> ds;
  while (n > 0)
  {
    ds.push_front(n % 5);
    n /= 5;
  }

  for (auto d : ds)
    cout << d * 2;

  cout << endl;

  return 0;
}