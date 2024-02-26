#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  ui i;
  cin >> s >> i;

  cout << s[i - 1] << endl;
  return 0;
}