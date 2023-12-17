#include <iostream>

using namespace std;

int main()
{
  int k, x;
  cin >> k >> x;

  int cnt = 0;
  for (int i = x - (k - 1); i <= x + (k - 1); i++)
  {
    if (cnt > 0)
    {
      cout << " ";
    }
    cout << i;
    cnt++;
  }

  cout << endl;
  return 0;
}