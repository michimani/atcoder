#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui ans = 0;
  for (ui i = 0; i < 12; i++)
  {
    string s;
    cin >> s;
    ans += ui(s.find('r') != string::npos);
  }

  cout << ans << endl;
  return 0;
}