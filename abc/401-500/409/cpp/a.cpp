#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  string t, a;

  cin >> n >> t >> a;
  for (ui i = 0; i < n; i++)
  {
    if (t[i] == 'o' && a[i] == 'o')
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}