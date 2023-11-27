#include <iostream>

using namespace std;

int main()
{
  unsigned long long b;

  cin >> b;

  unsigned long long bb = 1;
  while (true)
  {
    unsigned long long bbb = 1;
    for (unsigned int i = 0; i < bb; i++)
    {
      bbb *= bb;
      if (bbb > b)
      {
        cout << "-1" << endl;
        return 0;
      }
    }

    if (bbb == b)
    {
      cout << bb << endl;
      return 0;
    }

    bb++;
  }

  cout << "-1" << endl;
}