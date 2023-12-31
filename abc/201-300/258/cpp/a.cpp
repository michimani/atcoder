#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui k;
  cin >> k;

  string h = "21";
  string m = to_string(k);
  if (k >= 60)
  {
    h = "22";
    m = to_string(k - 60);
  }

  if (m.length() == 1)
  {
    m = "0" + m;
  }

  cout << h << ":" << m << endl;

  return 0;
}