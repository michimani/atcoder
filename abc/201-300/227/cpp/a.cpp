#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k, a;
  cin >> n >> k >> a;

  a--;
  for (; --k;)
    a = (a + 1) % n;

  cout << a + 1 << endl;

  return 0;
}