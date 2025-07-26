#include <iostream>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;
using ll = long long;

int main()
{
  ui n, l, r;
  cin >> n >> l >> r;

  string s;
  cin >> s;

  for (ui i = l - 1; i < r; i++)
  {
    if (s[i] != 'o')
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}