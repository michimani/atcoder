#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<string, bool> s;
  for (ui i = 0; i < 4; i++)
  {
    string ss;
    cin >> ss;

    if (s[ss])
    {
      cout << "No" << endl;
      return 0;
    }

    s[ss] = true;
  }

  cout << "Yes" << endl;
  return 0;
}