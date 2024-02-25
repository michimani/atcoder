#include <iostream>
#include <map>

using namespace std;

int main()
{
  string w;
  cin >> w;

  map<char, bool> b = {
      {'a', true},
      {'i', true},
      {'u', true},
      {'e', true},
      {'o', true}};

  for (auto c : w)
  {
    if (b.count(c) == 0)
      cout << c;
  }
  cout << endl;

  return 0;
}