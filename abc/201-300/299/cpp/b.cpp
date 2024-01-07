#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using ui = unsigned int;

struct Player
{
  ui no;
  ui c;
  ui r;
};

bool comp(Player &l, Player &r)
{
  return l.r < r.r;
}

int main()
{
  ui n, t;
  cin >> n >> t;

  vector<Player> p(n);
  map<ui, vector<Player>> cp;

  for (ui i = 0; i < n; i++)
  {
    ui c;
    cin >> c;
    p[i].no = i + 1;
    p[i].c = c;
  }

  for (ui i = 0; i < n; i++)
  {
    ui r;
    cin >> r;
    p[i].r = r;
  }

  for (auto &pp : p)
  {
    cp[pp.c].push_back(pp);
  }

  if (cp.count(t) == 0)
  {
    t = p[0].c;
  }

  vector<Player> cand = cp[t];

  sort(cand.rbegin(), cand.rend(), comp);

  cout << cand[0].no << endl;
  return 0;
}