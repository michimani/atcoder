// https://atcoder.jp/contests/abc295/tasks/abc295_c
#include <iostream>
#include <map>

using namespace std;

int main()
{
  int N = 0;
  cin >> N;

  map<int, int> c;
  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;

    if (c.count(a) == 0)
    {
      c[a] = 1;
    }
    else
    {
      c[a] += 1;
    }
  }

  int ans = 0;

  auto iter = c.begin();
  while (iter != c.end())
  {
    ans += iter->second / 2;
    ++iter;
  }

  cout << ans << endl;
}