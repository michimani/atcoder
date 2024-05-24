#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui k;
  cin >> k;

  string s;
  cin >> s;

  for (ui i = 0; i < min(k, ui(s.length())); i++)
    cout << s[i];

  if (s.length() > k)
    cout << "...";

  cout << endl;

  return 0;
}