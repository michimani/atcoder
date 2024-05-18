#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string a, b;
  cin >> a >> b;

  if (a.length() > b.length())
  {
    cout << "GREATER" << endl;
    return 0;
  }

  if (a.length() < b.length())
  {
    cout << "LESS" << endl;
    return 0;
  }

  for (ui i = 0; i < a.length(); i++)
  {
    if (a[i] > b[i])
    {
      cout << "GREATER" << endl;
      return 0;
    }

    if (a[i] < b[i])
    {
      cout << "LESS" << endl;
      return 0;
    }
  }

  cout << "EQUAL" << endl;

  return 0;
}