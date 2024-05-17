#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  string w;
  cin >> w;

  map<char, ui> c;
  for (auto &ww : w)
    c[ww]++;

  for (auto i : c)
  {
    if (i.second % 2 != 0)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}