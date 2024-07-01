#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<char, ui> s;
  for (ui i = 0; i < 3; i++)
  {
    char c;
    cin >> c;

    s[c] = i;
  }

  cout << (s['R'] < s['M'] ? "Yes" : "No") << endl;

  return 0;
}