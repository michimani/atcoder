#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui a, b;
  cin >> a >> b;

  swap(s[a - 1], s[b - 1]);

  cout << s << endl;
  return 0;
}