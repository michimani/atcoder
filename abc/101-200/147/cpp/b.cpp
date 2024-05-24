#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui d = 0;
  ui l = s.length();
  for (ui i = 0; i < l / 2; i++)
    d += ui(s[i] != s[l - i - 1]);

  cout << d << endl;

  return 0;
}