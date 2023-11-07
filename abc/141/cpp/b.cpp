#include <iostream>
#include <map>

using namespace std;

int main()
{
  string s = "";
  cin >> s;

  map<char, bool> odd = {{'R', true}, {'U', true}, {'D', true}},
                  even = {{'L', true}, {'U', true}, {'D', true}};

  for (unsigned int i = 0; i < s.size(); i++)
  {
    if ((i + 1) % 2 == 0)
    {
      if (even.count(s[i]) == 0)
      {
        cout << "No" << endl;
        return 0;
      }
    }
    else
    {
      if (odd.count(s[i]) == 0)
      {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
}