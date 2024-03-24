#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui w, b;
  cin >> w >> b;

  string s = "wbwbwwbwbwbw";
  ui ml = ui(s.length());
  ui l = w + b;
  for (ui i = 0; i < ml; i++)
  {
    ui wc = 0, bc = 0;
    for (ui j = i; j < i + l; j++)
    {
      wc += ui(s[j % ml] == 'w');
      bc += ui(s[j % ml] == 'b');
      if (wc > w || bc > b)
        break;
    }
    if (wc == w && bc == b)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}