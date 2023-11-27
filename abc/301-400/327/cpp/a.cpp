#include <iostream>

using namespace std;

int main()
{
  int n;
  string s;
  cin >> n >> s;

  char prev = '.';
  for (auto &c : s)
  {
    if ((prev == 'a' && c == 'b') || (prev == 'b' && c == 'a'))
    {
      cout << "Yes" << endl;
      return 0;
    }
    prev = c;
  }

  cout << "No" << endl;
}