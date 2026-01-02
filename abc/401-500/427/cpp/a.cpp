#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui mi = s.length() / 2;
  for (ui i = 0; i < s.length(); i++)
    if (i != mi)
      cout << s[i];

  cout << endl;

  return 0;
}