#include <iostream>

using namespace std;

int main()
{
  string ccc;
  cin >> ccc;

  if (ccc[0] == ccc[1] && ccc[1] == ccc[2])
  {
    cout << "Won" << endl;
  }
  else
  {
    cout << "Lost" << endl;
  }

  return 0;
}