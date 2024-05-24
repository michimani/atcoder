#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui x;
  cin >> x;

  cout << ui(x != 1) << endl;

  return 0;
}