#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<char, int> ai{
      {'A', 0},
      {'B', 1},
      {'C', 2},
      {'D', 3},
      {'E', 4},
  };

  string s, t;
  cin >> s >> t;

  if (
      (abs(ai[s[0]] - ai[s[1]]) % 3 == 1 && abs(ai[t[0]] - ai[t[1]]) % 3 == 1) ||
      (abs(ai[s[0]] - ai[s[1]]) % 3 != 1 && abs(ai[t[0]] - ai[t[1]]) % 3 != 1))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}