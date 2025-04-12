#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  string s = "";
  ui err = 0;
  bool is_login = false;
  for (; n--;)
  {
    cin >> s;

    if (s == "login")
    {
      is_login = true;
    }
    else if (s == "logout")
    {
      is_login = false;
    }
    else if (s == "private")
    {
      err += ui(!is_login);
      continue;
    }
    else
    {
      // noop
    }
  }

  cout << err << endl;

  return 0;
}