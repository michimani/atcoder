#include <iostream>

using namespace std;

int main()
{
  string a = "";
  cin >> a;

  if (a.length() == 1)
  {
    if (a == "a")
    {
      cout << "-1" << endl;
      return 0;
    }

    cout << char(a[0] - 1) << endl;
    return 0;
  }

  for (unsigned int i = 0; i < a.length() - 1; i++)
  {
    cout << a[i];
  }

  cout << endl;
}