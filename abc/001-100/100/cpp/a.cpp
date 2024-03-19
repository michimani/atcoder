#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  cout << (a < 9 && b < 9 ? "Yay!" : ":(") << endl;
  return 0;
}