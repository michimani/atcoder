#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  for (ui i = 1; i <= n; i++)
  {
    char c;
    cin >> c;

    if (i == k)
      c += 32;

    cout << c;
  }

  cout << endl;

  return 0;
}