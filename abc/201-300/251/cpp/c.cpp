#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using ui = unsigned int;

struct Poem
{
  ui i;
  string s;
  ui t;
};

bool comp(Poem &l, Poem &r)
{
  if (l.t == r.t)
  {
    return l.i < r.i;
  }

  return l.t > r.t;
}

int main()
{
  ui n;
  cin >> n;

  map<string, bool> sm;
  vector<Poem> pv;
  for (ui i = 1; i <= n; i++)
  {
    string s;
    ui t;
    cin >> s >> t;

    if (sm.count(s) == 0)
    {
      sm[s] = true;
      pv.push_back({i, s, t});
    }
  }

  sort(pv.begin(), pv.end(), comp);

  cout << pv[0].i << endl;
  return 0;
}