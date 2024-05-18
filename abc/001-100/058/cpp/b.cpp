#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<string> oe(2, "");
  cin >> oe[1] >> oe[0];

  for (ui i = 1; i <= oe[0].length() + oe[1].length(); i++)
    cout << oe[ui(i % 2)][ui(ceil(double(i) / 2)) - 1];

  cout << endl;

  return 0;
}