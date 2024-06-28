#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;

  sort(t.rbegin(), t.rend());
  sort(s.begin(), s.end());

  cout << (s < t ? "Yes" : "No") << endl;

  return 0;
}