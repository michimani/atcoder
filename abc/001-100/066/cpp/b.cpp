#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  s.pop_back();
  ui l = ui(s.length());
  if (l % 2 != 0)
    s.pop_back();

  while (true)
  {
    l = ui(s.length());
    bool e = true;
    for (ui i = 0; i < l / 2; i++)
    {
      if (s[i] != s[i + l / 2])
      {
        e = false;
        break;
      }
    }

    if (e)
      break;

    s.pop_back();
    s.pop_back();
  }

  cout << s.length() << endl;

  return 0;
}