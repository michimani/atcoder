#include <iostream>
#include <vector>

using namespace std;

bool ends(string str, string target)
{
  if (str.length() < target.length())
  {
    return false;
  }

  return str.substr(str.length() - target.length()) == target;
}

int main()
{
  string s;
  cin >> s;

  vector<string> tt{"dream", "dreamer", "erase", "eraser"};
  while (s.length() >= 5)
  {
    bool matched = false;
    for (unsigned int i = 0; i < tt.size(); i++)
    {
      if (ends(s, tt[i]))
      {
        s = s.substr(0, s.length() - tt[i].length());
        matched = true;
      }
    }

    if (!matched)
    {
      break;
    }
  }

  if (s.length() == 0)
  {
    cout << "YES" << endl;
    return 0;
  }

  cout << "NO" << endl;
}
