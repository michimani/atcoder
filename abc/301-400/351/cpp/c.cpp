#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> b;
  for (; n--;)
  {
    ui a;
    cin >> a;

    if (b.size() == 0)
    {
      b.push_back(a);
      continue;
    }

    if (b[b.size() - 1] != a)
    {
      b.push_back(a);
      continue;
    }

    b.push_back(a);
    while (b.size() >= 2 && b[b.size() - 1] == b[b.size() - 2])
    {
      a = b[b.size() - 1];
      b.pop_back();
      b.pop_back();
      b.push_back(a + 1);
    }
  }

  cout << b.size() << endl;
  return 0;
}