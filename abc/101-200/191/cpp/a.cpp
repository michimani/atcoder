#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui v, t, s, d;
  cin >> v >> t >> s >> d;

  cout << (v * t <= d && d <= v * s ? "No" : "Yes") << endl;

  return 0;
}