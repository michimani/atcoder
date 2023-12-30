#include <iostream>

using namespace std;

int f(int k)
{
  if (k == 0)
  {
    return 1;
  }
  return k * f(k - 1);
}

int main()
{
  int n;
  cin >> n;

  cout << f(n) << endl;
  return 0;
}