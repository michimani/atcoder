#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui q;
  cin >> q;

  vector<ui> xv;
  for (ui i = 0; i < q; i++)
  {
    ui cmd, xk;
    cin >> cmd >> xk;

    if (cmd == 1)
    {
      xv.push_back(xk);
    }
    else
    {
      cout << xv[xv.size() - xk] << endl;
    }
  }

  return 0;
}