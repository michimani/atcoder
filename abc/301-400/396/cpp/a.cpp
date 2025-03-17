#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> a(3, 0);
  for (ui i = 0; i < n; i++)
  {
    cin >> a[i % 3];

    if (a[0] == a[1] && a[1] == a[2])
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}