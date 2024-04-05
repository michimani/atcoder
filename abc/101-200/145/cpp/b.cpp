#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;
  string s;
  cin >> s;

  if (n % 2 != 0)
  {
    cout << "No" << endl;
    return 0;
  }

  for (ui i = 0; i < n / 2; i++)
  {
    if (s[i] != s[i + n / 2])
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}