#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> for2nd;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;

    if (a % 2 == 0)
    {
      for2nd.push_back(a);
    }
  }

  bool ok = true;
  for (auto &a : for2nd)
  {
    if (a % 3 != 0 && a % 5 != 0)
    {
      ok = false;
      break;
    }
  }

  if (ok)
  {
    cout << "APPROVED" << endl;
  }
  else
  {
    cout << "DENIED" << endl;
  }

  return 0;
}