#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  cout << b / a + ui(b % a != 0) << endl;
  return 0;
}