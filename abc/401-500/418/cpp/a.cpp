#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{

  ui n;
  cin >> n;

  if (n < 3)
  {
    cout << "No" << endl;
    return 0;
  }

  string s;
  cin >> s;

  if (s[n - 1] == 'a' && s[n - 2] == 'e' && s[n - 3] == 't')
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}