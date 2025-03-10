#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui p = 0;
  for (; n--;)
  {
    ui a;
    cin >> a;
    if (a <= p)
    {
      cout << "No" << endl;
      return 0;
    }

    p = a;
  }

  cout << "Yes" << endl;

  return 0;
}