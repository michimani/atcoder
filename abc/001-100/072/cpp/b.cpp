#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  for (ui i = 1; i <= s.length(); i++)
    if (i % 2 == 1)
      cout << s[i - 1];

  cout << endl;

  return 0;
}