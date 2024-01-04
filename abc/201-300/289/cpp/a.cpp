#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  for (auto &c : s)
  {
    if (c == '1')
    {
      cout << '0';
    }
    else
    {
      cout << '1';
    }
  }

  cout << endl;

  return 0;
}