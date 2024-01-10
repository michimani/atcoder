#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, n;
  cin >> h >> n;

  ui A = 0;
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;
    A += a;
  }

  if (A >= h)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}