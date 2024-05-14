#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  if (a > b)
    swap(a, b);

  cout << min(b - a, a + 10 - b) << endl;
  return 0;
}