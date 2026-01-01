#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;
using ll = long long;

int main()
{
  map<string, ui> v = {
      {"Ocelot", 0},
      {"Serval", 1},
      {"Lynx", 2},
  };

  string x, y;
  cin >> x >> y;

  cout << (v[x] >= v[y] ? "Yes" : "No") << endl;

  return 0;
}