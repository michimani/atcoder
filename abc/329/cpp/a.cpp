#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  for (unsigned int i = 0; i < s.size(); i++)
  {
    if (i > 0)
    {
      cout << " ";
    }

    cout << s[i];
  }

  cout << endl;

  return 0;
}