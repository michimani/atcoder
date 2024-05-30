#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui l, r;
  cin >> l >> r;
  string s;
  cin >> s;

  for (ui i = 0; i < l - 1; i++)
    cout << s[i];

  for (ui i = 0; i < r - l + 1; i++)
    cout << s[r - i - 1];

  for (ui i = r; i < s.length(); i++)
    cout << s[i];

  cout << endl;

  return 0;
}