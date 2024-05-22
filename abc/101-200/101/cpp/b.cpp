#include <iostream>

using namespace std;
using ui = unsigned int;

ui s(ui n)
{
  ui r = 0;
  string str = to_string(n);
  for (auto c : str)
    r += c - '0';

  return r;
}

int main()
{
  ui n;
  cin >> n;

  cout << (n % s(n) == 0 ? "Yes" : "No") << endl;

  return 0;
}