#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string const h = "Hello,World!";

  string s;
  cin >> s;

  if (s.length() != h.length())
  {
    cout << "WA" << endl;
    return 0;
  }

  for (ui i = 0; i < h.length(); i++)
  {
    if (s[i] != h[i])
    {
      cout << "WA" << endl;
      return 0;
    }
  }

  cout << "AC" << endl;
  return 0;
}