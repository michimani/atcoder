#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  cout << (s[0] - '0') * (s[2] - '0') << endl;

  return 0;
}