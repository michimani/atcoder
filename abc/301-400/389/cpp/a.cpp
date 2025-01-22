#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  cout << ui(s[0] - 48) * ui(s[2] - 48) << endl;

  return 0;
}