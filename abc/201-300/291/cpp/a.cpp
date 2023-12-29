#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  for (unsigned int i = 0; i < s.length(); i++)
  {
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
      cout << i + 1 << endl;
      return 0;
    }
  }

  return 0;
}