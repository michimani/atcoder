#include <iostream>
#include <deque>

using namespace std;
using ui = unsigned int;

int main()
{
  deque<ui> a;
  while (true)
  {
    ui aa;
    cin >> aa;

    a.push_front(aa);
    if (aa == 0)
      break;
  }

  for (auto aa : a)
    cout << aa << endl;

  return 0;
}