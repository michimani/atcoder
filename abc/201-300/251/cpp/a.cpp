#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  for (ui i = 0; i < (6 / s.size()); i++)
  {
    cout << s;
  }
  cout << endl;
}