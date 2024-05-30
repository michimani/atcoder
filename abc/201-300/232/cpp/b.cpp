#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s, t;
  cin >> s >> t;

  int k = t[0] - s[0];
  if (k < 0)
    k += 26;

  for (ui i = 1; i < s.length(); i++)
  {
    int kk = t[i] - s[i];
    if (kk < 0)
      kk += 26;
    if (k != kk)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}