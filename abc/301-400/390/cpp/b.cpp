#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  if (n == 2)
  {
    cout << "Yes" << endl;
    return 0;
  }

  vector<ull> abc(3);
  cin >> abc[0] >> abc[1];
  for (ui i = 2; i < n; i++)
  {
    cin >> abc[i % 3];
    ui ii = i - 2;
    if (abc[(ii + 1) % 3] * abc[(ii + 1) % 3] != abc[ii % 3] * abc[(ii + 2) % 3])
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}