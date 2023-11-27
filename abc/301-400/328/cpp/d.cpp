#include <iostream>

using namespace std;

int main()
{
  string s = "";
  cin >> s;

  char prev1 = '_', prev2 = '_';
  string ans = "";
  for (unsigned int i = 0; i < s.size(); i++)
  {
    if (prev2 == 'A' && prev1 == 'B' && s[i] == 'C')
    {
      ans.pop_back();
      ans.pop_back();
      if (ans.length() >= 2)
      {
        prev2 = ans[ans.length() - 2];
        prev1 = ans[ans.length() - 1];
      }
      else if (ans.length() == 1)
      {
        prev2 = '_';
        prev1 = ans[0];
      }
      else
      {
        prev1 = '_', prev2 = '_';
      }
    }
    else
    {
      ans.push_back(s[i]);
      prev2 = prev1;
      prev1 = s[i];
    }
  }

  cout << ans << endl;
}