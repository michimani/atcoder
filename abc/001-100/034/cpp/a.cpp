#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui x, y;
  cin >> x >> y;

  cout << (x < y ? "Better" : "Worse") << endl;
  return 0;
}