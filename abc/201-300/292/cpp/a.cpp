#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  for (auto &c : s)
  {
    cout << char(c - char(32));
  }

  cout << endl;

  return 0;
}