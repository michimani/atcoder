#include <iostream>
#include <map>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  int mx = 0, pmx = 0;
  map<int, bool> exists;
  for (unsigned int i = 0; i < n; i++)
  {
    int a;
    cin >> a;

    if (exists[a])
    {
      continue;
    }

    exists[a] = true;
    if (a >= mx)
    {
      pmx = mx;
      mx = a;
    }
    else if (a > pmx)
    {
      pmx = a;
    }
  }

  cout << pmx << endl;
  return 0;
}