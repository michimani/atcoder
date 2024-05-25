#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  string s;
  cin >> s;

  cout << (s[n - 1] == 'o' ? "Yes" : "No") << endl;

  return 0;
}