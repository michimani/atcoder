#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<char, ui> s;
  for (ui i = 0; i < 3; i++)
  {
    char si;
    cin >> si;
    s[si]++;
  }

  cout << s['1'] << endl;
  return 0;
}