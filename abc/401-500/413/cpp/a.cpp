#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  ui sum = 0;
  for (; n--;)
  {
    ui a;
    cin >> a;
    sum += a;
    if (sum > m)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}