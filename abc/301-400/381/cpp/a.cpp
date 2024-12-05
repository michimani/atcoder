#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  string s;
  cin >> n >> s;

  if (n % 2 == 0)
  {
    cout << "No" << endl;
    return 0;
  }

  // 1
  ui i = 0;
  for (; i < ((n + 1) / 2 - 1); i++)
  {
    if (s[i] != '1')
    {
      cout << "No" << endl;
      return 0;
    }
  }

  // /
  if (s[i] != '/')
  {
    cout << "No" << endl;
    return 0;
  }
  i++;

  // 2
  for (; i < n; i++)
  {
    if (s[i] != '2')
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}