#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

struct Task
{
  bool ac;
  ui wa;
};

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<Task> tasks(n + 1);

  ui ac = 0;
  ui wa = 0;
  for (ui i = 0; i < m; i++)
  {
    ui p;
    string s;
    cin >> p >> s;

    if (s == "WA")
    {
      tasks[p].wa++;
    }
    else if (s == "AC" && !tasks[p].ac)
    {
      tasks[p].ac = true;
      ac++;
      wa += tasks[p].wa;
    }
  }

  cout << ac << " " << wa << endl;
  return 0;
}