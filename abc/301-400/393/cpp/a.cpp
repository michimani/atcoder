#include <iostream>

using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;

  int ans = 0;
  if (s == "sick")
  {
    if (t == "sick")
    {
      ans = 1;
    }
    else
    {
      ans = 2;
    }
  }
  else
  {
    if (t == "sick")
    {
      ans = 3;
    }
    else
    {
      ans = 4;
    }
  }

  cout << ans << endl;

  return 0;
}