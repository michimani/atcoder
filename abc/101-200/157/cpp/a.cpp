#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  cout << n / 2 + ui(n % 2 != 0) << endl;

  return 0;
}