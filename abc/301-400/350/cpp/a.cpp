#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui n = 0;
  for (ui i = 0; i < 3; i++)
    n += ui(s[6 - 1 - i] - '0') * ui(pow(10, i));

  if (n == 316 || n == 0)
  {
    cout << "No" << endl;
    return 0;
  }

  cout << (n < 350 ? "Yes" : "No") << endl;

  return 0;
}