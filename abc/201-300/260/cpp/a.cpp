#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<char, ui> c;
  for (ui i = 0; i < 3; i++)
  {
    char cc;
    cin >> cc;
    c[cc]++;
  }

  for (auto it : c)
  {
    if (it.second == 1)
    {
      cout << it.first << endl;
      return 0;
    }
  }

  cout << "-1" << endl;

  return 0;
}