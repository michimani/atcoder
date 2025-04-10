#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  int X;
  cin >> X;

  int total = 0;
  for (int i = 1; i <= 9; i++)
    for (int j = 1; j <= 9; j++)
      if (i * j != X)
        total += i * j;

  cout << total << endl;

  return 0;
}