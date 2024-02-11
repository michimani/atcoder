#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui k;
  cin >> k;

  string ans = "";
  for (ui i = 0; i < k; i++)
  {
    ans.push_back('A' + i);
  }

  cout << ans << endl;
  return 0;
}