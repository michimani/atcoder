#include <iostream>

using namespace std;

int main()
{
  double x;
  cin >> x;

  cout << (int(x * 1000) + 500) / 1000 << endl;
  return 0;
}