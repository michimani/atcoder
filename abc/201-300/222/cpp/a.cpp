#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string n;
  cin >> n;

  for (ui i = 0; i < 4 - n.length(); i++)
    cout << '0';

  cout << n << endl;

  return 0;
}