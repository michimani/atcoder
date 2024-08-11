#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  string p = "", s = "";
  for (; --n;)
  {
    cin >> s;
    if (p == "sweet" && p == s)
    {
      break;
      return 0;
    }
    p = s;
  }

  cout << (n == 0 ? "Yes" : "No") << endl;

  return 0;
}