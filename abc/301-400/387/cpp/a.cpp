#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  cout << ui(pow((a + b), 2)) << endl;

  return 0;
}