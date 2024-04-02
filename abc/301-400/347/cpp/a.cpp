#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  bool o = false;
  for (; n--;)
  {
    ui a;
    cin >> a;
    if (a % k == 0)
    {
      if (o)
        cout << " ";

      cout << a / k;
      o = true;
    }
  }

  cout << endl;

  return 0;
}