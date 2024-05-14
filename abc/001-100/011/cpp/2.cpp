#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  for (ui i = 0; i < s.length(); i++)
  {
    if (i == 0)
    {
      if (s[i] > 'Z')
        s[i] = s[i] - 32;
    }
    else
    {
      if (s[i] < 'a')
        s[i] = s[i] + 32;
    }
  }

  cout << s << endl;
  return 0;
}