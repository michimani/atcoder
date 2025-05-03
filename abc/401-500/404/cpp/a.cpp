#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  map<int, bool> a;
  for (int i = int('a'); i <= int('z'); i++)
    a[i] = true;

  for (auto c : s)
    a.erase(int(c));

  cout << char(a.begin()->first) << endl;

  return 0;
}