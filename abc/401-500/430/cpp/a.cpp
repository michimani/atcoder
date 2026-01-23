#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c, d;
  cin >> a >> b >> c >> d;

  cout << (c >= a && d < b ? "Yes" : "No") << endl;

  return 0;
}