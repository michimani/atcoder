#include <iostream>

using namespace std;

int main()
{
  string s = "";
  cin >> s;

  for (unsigned long i = 1; i < s.length(); i += 2)
  {
    if (s[i] == '1')
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}