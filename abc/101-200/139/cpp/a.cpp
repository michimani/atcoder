#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s, t;
  cin >> s >> t;

  ui c = 0;
  for (ui i = 0; i < 3; i++)
    c += ui(s[i] == t[i]);

  cout << c << endl;
  return 0;
}