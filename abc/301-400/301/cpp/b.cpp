#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  int prev = 0;
  for (ui i = 0; i < n; i++)
  {
    int a;
    cin >> a;

    if (prev == 0 || abs(a - prev) == 1)
    {
      if (i > 0)
      {
        cout << " ";
      }
      cout << a;
      prev = a;
      continue;
    }

    if (a > prev)
    {
      for (int aa = prev + 1; aa <= a; aa++)
      {
        cout << " " << aa;
      }
    }
    else
    {
      for (int aa = prev - 1; aa >= a; aa--)
      {
        cout << " " << aa;
      }
    }

    prev = a;
  }

  cout << endl;

  return 0;
}