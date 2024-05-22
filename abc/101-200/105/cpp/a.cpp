#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  cout << ui(n % k != 0) << endl;

  return 0;
}