#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  cout << max(0, (2 * a + 100) - b) << endl;
  return 0;
}