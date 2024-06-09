#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  for (ui i = 1; i <= s.length() / 2; i++)
    swap(s[(2 * i - 1) - 1], s[2 * i - 1]);

  cout << s << endl;

  return 0;
}