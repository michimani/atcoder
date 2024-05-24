#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  for (ui i = 0; i < s.length(); i++)
    cout << s[(i + 1) % s.length()];

  cout << endl;

  return 0;
}