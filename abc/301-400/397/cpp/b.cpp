#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  string t = "";
  for (auto c : s)
  {
    if ((t.length() + 1) % 2 == 0 && c != 'o')
      t += 'o';
    else if ((t.length() + 1) % 2 == 1 && c != 'i')
      t += 'i';

    t += c;
  }

  if (t.length() % 2 == 1)
    t += 'o';

  cout << t.length() - s.length() << endl;

  return 0;
}