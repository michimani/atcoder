#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<int> n(4, 0);
  for (auto &nn : n)
  {
    char c;
    cin >> c;
    nn = c - '0';
  }

  vector<int> op = {1, -1};
  for (auto &op1 : op)
  {
    for (auto &op2 : op)
    {
      for (auto &op3 : op)
      {
        if (n[0] + n[1] * op1 + n[2] * op2 + n[3] * op3 == 7)
        {
          cout << n[0] << (op1 == 1 ? '+' : '-');
          cout << n[1] << (op2 == 1 ? '+' : '-');
          cout << n[2] << (op3 == 1 ? '+' : '-');
          cout << n[3] << "=7" << endl;
          return 0;
        }
      }
    }
  }

  return 0;
}