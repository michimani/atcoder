#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<int> a(3, 0);
  for (auto &aa : a)
    cin >> aa;

  for (ui i = 0; i < 3; i++)
  {
    if (a[i % 3] * a[(i + 1) % 3] == a[(i + 2) % 3])
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}