#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  for (ui i = 0; i < 3; i++)
  {
    string s;
    cin >> s;
    cout << s[0];
  }
  cout << endl;

  return 0;
}