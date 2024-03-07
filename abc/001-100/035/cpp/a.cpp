#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui w, h;
  cin >> w >> h;

  cout << (w * 3 == h * 4 ? "4:3" : "16:9") << endl;
  return 0;
}