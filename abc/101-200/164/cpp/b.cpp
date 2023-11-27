#include <iostream>

using namespace std;

int main()
{
  int th, ta, ah, aa;
  cin >> th >> ta >> ah >> aa;

  bool t = true;
  while (th > 0 && ah > 0)
  {
    if (t)
    {
      ah -= ta;
    }
    else
    {
      th -= aa;
    }

    t = !t;
  }

  if (th > ah)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}