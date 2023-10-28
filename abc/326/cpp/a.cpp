#include <iostream>

using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;

  if (y - x >= -3 && y - x <= 2)
  {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;
}