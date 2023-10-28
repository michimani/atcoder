#include <iostream>
#include <map>

using namespace std;

int main()
{
  string x = "";
  cin >> x;

  map<char, bool> choku = {
      {'c', true},
      {'o', true},
      {'k', true},
      {'u', true},
  };

  for (unsigned int i = 0; i < x.length(); i++)
  {
    if (choku.count(x[i]) == 0)
    {
      cout << "NO" << endl;
      return 0;
    }

    if (x[i] == 'c')
    {
      if (i == x.length() - 1)
      {
        cout << "NO" << endl;
        return 0;
      }
      if (x[i + 1] != 'h')
      {
        cout << "NO" << endl;
        return 0;
      }

      i++;
    }
  }

  cout << "YES" << endl;
}