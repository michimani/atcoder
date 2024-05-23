#include <iostream>

using namespace std;
using ui = unsigned int;

bool is_rep(const ui n)
{
  string s = to_string(n);
  char p = s[0];
  for (ui i = 1; i < s.length(); i++)
  {
    if (p != s[i])
      return false;

    p = s[i];
  }

  return true;
}

int main()
{
  ui n;
  cin >> n;

  while (!is_rep(n))
    n++;

  cout << n << endl;

  return 0;
}