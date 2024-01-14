#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  cout << "L";
  for (ui i = 0; i < n; i++)
  {
    cout << "o";
  }

  cout << "ng" << endl;
  return 0;
}