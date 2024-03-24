#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  cout << ((a + b) % 2 == 0 ? to_string((a + b) / 2) : "IMPOSSIBLE") << endl;
  return 0;
}