#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, bool> am;
  for (; n--;)
  {
    ui a;
    cin >> a;
    if (am[a])
    {
      cout << "NO" << endl;
      return 0;
    }
    am[a] = true;
  }

  cout << "YES" << endl;
  return 0;
}