#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string a = "atcoder";

  ui l, r;
  cin >> l >> r;

  for (ui i = l - 1; i < r; i++)
  {
    cout << a[i];
  }

  cout << endl;

  return 0;
}