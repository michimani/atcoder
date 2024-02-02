#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  for (ui i = 0; i < n; i++)
  {
    char c;
    cin >> c;
    cout << c << c;
  }
  cout << endl;

  return 0;
}