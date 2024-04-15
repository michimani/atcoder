#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

ui s(string n)
{
  ui res = 0;
  for (auto &c : n)
    res += c - '0';
  return res;
}

int main()
{
  string a, b;
  cin >> a >> b;

  cout << max(s(a), s(b)) << endl;
  return 0;
}