#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  string s;
  cin >> n >> s;

  cout << s[n - 1] << endl;
  return 0;
}