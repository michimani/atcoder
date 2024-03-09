#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  bool ex = false;
  for (auto c : s)
  {
    ex = (c == '|' ? !ex : ex);
    if (!ex && c != '|')
      cout << c;
  }

  cout << endl;
  return 0;
}