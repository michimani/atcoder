#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  cout << (n % 100 == 0 ? n / 100 : n / 100 + 1) << endl;
  return 0;
}