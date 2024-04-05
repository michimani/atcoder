#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;
  string s, t;
  cin >> s >> t;

  for (ui i = 0; i < n; i++)
    cout << s[i] << t[i];

  cout << endl;
  return 0;
}