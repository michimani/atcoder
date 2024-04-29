#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<string> s(3, "");
  for (auto &ss : s)
    cin >> ss;

  string t;
  cin >> t;

  for (auto &c : t)
    cout << s[ui(c - '0') - 1];

  cout << endl;

  return 0;
}