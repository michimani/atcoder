#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

struct User
{
  ui i;
  long double p;
};

bool comp(User &l, User &r)
{
  if (l.p == r.p)
  {
    return l.i < r.i;
  }

  return l.p > r.p;
}

int main()
{
  ui n;
  cin >> n;

  vector<User> uv(n);
  for (ui i = 0; i < n; i++)
  {
    long double a, b;
    cin >> a >> b;

    uv[i].i = i + 1;
    uv[i].p = a / (a + b);
  }

  sort(uv.begin(), uv.end(), comp);

  for (ui i = 0; i < n; i++)
  {
    if (i > 0)
    {
      cout << " ";
    }
    cout << uv[i].i;
  }
  cout << endl;

  return 0;
}