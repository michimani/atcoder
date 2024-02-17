#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  cout << 1;
  for (ui i = 0; i < n; i++)
  {
    cout << "01";
  }
  cout << endl;

  return 0;
}