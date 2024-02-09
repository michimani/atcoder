#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<string, bool> c = {
      {"ABC", true},
      {"ARC", true},
      {"AGC", true},
      {"AHC", true}};

  for (ui i = 0; i < 3; i++)
  {
    string s;
    cin >> s;
    c.erase(s);
  }

  cout << c.begin()->first << endl;
  return 0;
}