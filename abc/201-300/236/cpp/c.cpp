#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<string> sv(n);
  for (auto &s : sv)
    cin >> s;

  vector<string> tv(m);
  for (auto &t : tv)
    cin >> t;

  ui skip = 0;
  for (ui i = 0; i < n; i++)
  {
    if (sv[i] == tv[i - skip])
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
      skip++;
    }
  }

  return 0;
}