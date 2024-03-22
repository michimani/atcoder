#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  cout << n << endl;
  for (; n--;)
    cout << n << endl;

  return 0;
}