#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  for (auto c : s)
  {
    if (ui(c) <= ui('Z'))
      cout << c;
  }

  cout << endl;

  return 0;
}