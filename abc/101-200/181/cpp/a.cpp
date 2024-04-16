#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  cout << (n % 2 == 0 ? "White" : "Black") << endl;
  return 0;
}