#include <iostream>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  ui k;
  cin >> s >> k;

  sort(s.begin(), s.end());

  do
  {
    k--;
    if (k == 0)
    {
      cout << s << endl;
      return 0;
    }
  } while (next_permutation(s.begin(), s.end()));

  return 0;
}