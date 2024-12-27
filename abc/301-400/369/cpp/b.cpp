#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<char, vector<int>> lr;
  for (; n--;)
  {
    int a;
    char s;
    cin >> a >> s;

    lr[s].push_back(a);
  }

  int l_min = 9900, r_min = 9900;

  // L
  for (int i = 1; i <= 100; i++)
  {
    int m = 0;
    int p = i;
    for (auto t : lr['L'])
    {
      m += abs(p - t);
      p = t;
    }

    l_min = min(l_min, m);
  }

  // R
  for (int i = 1; i <= 100; i++)
  {
    int m = 0;
    int p = i;
    for (auto t : lr['R'])
    {
      m += abs(p - t);
      p = t;
    }

    r_min = min(r_min, m);
  }

  cout << l_min + r_min << endl;

  return 0;
}