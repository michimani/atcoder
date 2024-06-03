#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<ui, bool> s = {
      {0, true},
      {1, true},
      {2, true},
      {3, true},
      {4, true},
      {5, true},
      {6, true},
      {7, true},
      {8, true},
      {9, true},
  };

  for (ui i = 0; i < 9; i++)
  {
    char c;
    cin >> c;

    s.erase(ui(c - '0'));
  }

  cout << s.begin()->first << endl;

  return 0;
}