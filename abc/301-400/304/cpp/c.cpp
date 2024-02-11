#include <iostream>
#include <vector>
#include <map>
#include <stack>

using namespace std;
using ui = unsigned int;

struct User
{
  ui i;
  int x, y;
  bool virus;
};

int main()
{
  ui n, d;
  cin >> n >> d;

  ui dd = d * d;

  vector<User> users(n);
  for (ui i = 0; i < n; i++)
  {
    users[i].i = i;
    cin >> users[i].x >> users[i].y;
  }

  map<ui, vector<ui>> um;
  for (auto &u : users)
    for (auto &uu : users)
      if (ui((u.x - uu.x) * (u.x - uu.x) + (u.y - uu.y) * (u.y - uu.y)) <= dd)
        um[u.i].push_back(uu.i);

  stack<ui> st;
  st.push(0);
  vector<bool> checked(n, false);
  users[0].virus = true;
  checked[0] = true;
  while (!st.empty())
  {
    ui i = st.top();
    st.pop();
    for (auto ti : um[i])
    {
      if (!checked[ti])
      {
        st.push(ti);
        users[ti].virus = true;
        checked[ti] = true;
      }
    }
  }

  for (auto &u : users)
    cout << (u.virus ? "Yes" : "No") << endl;

  return 0;
}