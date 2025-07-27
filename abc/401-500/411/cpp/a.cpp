#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string p;
  ui l;
  cin >> p >> l;

  cout << (p.length() >= l ? "Yes" : "No") << endl;

  return 0;
}