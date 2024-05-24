#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  for (auto c : s)
  {
    int nc = int(c) + n;
    if (nc > 90)
      nc -= 26;
    cout << char(nc);
  }

  cout << endl;

  return 0;
}