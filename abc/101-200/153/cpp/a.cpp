#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, a;
  cin >> h >> a;

  cout << h / a + ui(h % a > 0) << endl;
  return 0;
}