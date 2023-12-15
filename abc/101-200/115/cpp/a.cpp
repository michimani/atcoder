#include <iostream>

using namespace std;

int main()
{
  int d;
  cin >> d;

  string s = "Christmas";
  if (d == 22)
  {
    s = "Christmas Eve Eve Eve";
  }
  else if (d == 23)
  {
    s = "Christmas Eve Eve";
  }
  else if (d == 24)
  {
    s = "Christmas Eve";
  }

  cout << s << endl;

  return 0;
}