#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui m, d;
  cin >> m >> d;

  cout << (m % d == 0 ? "YES" : "NO") << endl;
  return 0;
}