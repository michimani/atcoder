#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  bool ex = false;
  for (auto c : s)
  {
    if (c == '|')
    {
      ex = !ex;
      continue;
    }

    if (!ex)
      cout << c;
  }

  cout << endl;
  return 0;
}