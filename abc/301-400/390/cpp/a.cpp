#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<pair<ui, ui>> diff;
  ui a = 0;
  ui p = 0;
  for (ui i = 0; i < 5; i++)
  {
    cin >> a;
    if (i > 0)
      if (a < p)
        diff.push_back({p, a});

    p = a;
  }

  cout << (diff.size() == 1 && diff[0].first - diff[0].second == 1 ? "Yes" : "No") << endl;

  return 0;
}