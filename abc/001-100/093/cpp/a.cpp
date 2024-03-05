#include <iostream>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  sort(s.begin(), s.end());

  cout << (s == "abc" ? "Yes" : "No") << endl;
  return 0;
}