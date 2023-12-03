#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> s(3, 0);
  for (auto &ss : s)
  {
    cin >> ss;
  }

  for (auto &ss : s)
  {
    int rank = 1;
    for (auto &sss : s)
    {
      if (ss != sss && ss < sss)
      {
        rank++;
      }
    }

    cout << rank << endl;
  }

  return 0;
}