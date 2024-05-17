#include <iostream>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull n;
  cin >> n;

  cout << (n % 2 == 0 ? n - 1 : n + 1) << endl;
  return 0;
}