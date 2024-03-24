#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a;
  cin >> a;
  string s;
  cin >> s;

  cout << (a >= 3200 ? s : "red") << endl;
  return 0;
}