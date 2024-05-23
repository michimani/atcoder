#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<int> a(5, 0);
  for (auto &aa : a)
    cin >> aa;

  int k;
  cin >> k;

  for (ui i = 0; i < 5; i++)
  {
    for (ui j = i + 1; j < 5; j++)
    {
      if (abs(a[i] - a[j]) > k)
      {
        cout << ":(" << endl;
        return 0;
      }
    }
  }

  cout << "Yay!" << endl;

  return 0;
}