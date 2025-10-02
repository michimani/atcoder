#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<string> s(n, "");
  for (auto &ss : s)
    cin >> ss;

  ui x;
  string y;
  cin >> x >> y;

  cout << (s[x - 1] == y ? "Yes" : "No") << endl;

  return 0;
}