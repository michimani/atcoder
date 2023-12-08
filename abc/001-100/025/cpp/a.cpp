#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  string s;
  int n;
  cin >> s >> n;

  sort(s.begin(), s.end());
  int pos = 1;
  for (auto &s1 : s)
  {
    for (auto &s2 : s)
    {
      if (pos == n)
      {
        cout << s1 << s2 << endl;
        return 0;
      }
      pos++;
    }
  }

  return 0;
}