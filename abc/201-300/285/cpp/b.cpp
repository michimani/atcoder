#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  string s;
  cin >> n >> s;

  ui l = 0;
  for (ui i = 1; i <= n - 1; i++)
  {
    l = 0;
    for (ui j = 0; j < n; j++)
    {
      if (j + i >= n || s[j] == s[j + i])
        break;

      l++;
    }
    cout << l << endl;
  }

  return 0;
}