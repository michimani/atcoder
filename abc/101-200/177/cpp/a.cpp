#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui d, t, s;
  cin >> d >> t >> s;

  cout << (s * t >= d ? "Yes" : "No") << endl;
  return 0;
}