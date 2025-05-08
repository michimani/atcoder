#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui q;
  cin >> q;

  vector<ui> m(100, 0);

  ui a, b;
  for (; q--;)
  {
    cin >> a;

    if (a == 1)
    {
      cin >> b;
      m.push_back(b);
    }
    else
    {
      // a == 2
      cout << m[m.size() - 1] << endl;
      m.pop_back();
    }
  }

  return 0;
}