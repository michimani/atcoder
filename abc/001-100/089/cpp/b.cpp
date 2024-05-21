#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<char, bool> a;
  for (; n--;)
  {
    char s;
    cin >> s;
    a[s] = true;
  }

  cout << (a.size() == 3 ? "Three" : "Four") << endl;

  return 0;
}