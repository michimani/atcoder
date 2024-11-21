#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  string san = "san";
  for (ui i = 0; i <= 2; i++)
  {
    if (s[s.length() - 1 - (2 - i)] != san[i])
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}