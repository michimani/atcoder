#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, d;
  cin >> n >> d;

  cout << (n / (d * 2 + 1)) + ui(n % (d * 2 + 1) != 0) << endl;
  return 0;
}