#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool has_prefix(const string &s, const string &p)
{
  if (s.length() < p.length())
  {
    return false;
  }

  return s.substr(0, p.length()) == p;
}

int main()
{
  string s;
  cin >> s;

  reverse(s.begin(), s.end());

  vector<string> ps = {"maerd", "remaerd", "esare", "resare"};

  while (true)
  {
    if (s.length() == 0)
    {
      cout << "YES" << endl;
      return 0;
    }
    bool has_p = false;
    for (auto &p : ps)
    {
      if (has_prefix(s, p))
      {
        has_p = true;
        s = s.substr(p.length(), s.length() - p.length());
        break;
      }
    }

    if (!has_p)
    {
      cout << "NO" << endl;
      return 0;
    }
  }

  return 0;
}