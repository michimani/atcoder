#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  string ans = "Bad";
  if (n == 100)
  {
    ans = "Perfect";
  }
  else if (n >= 90)
  {
    ans = "Great";
  }
  else if (n >= 60)
  {
    ans = "Good";
  }

  cout << ans << endl;
  return 0;
}