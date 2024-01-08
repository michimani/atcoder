#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<string, ui> sp;
  ui sum = 0;
  for (ui i = 0; i < n; i++)
  {
    string s;
    ui p;
    cin >> s >> p;

    sum += p;
    sp[s] = p;
  }

  ui h = sum / 2;

  auto it = sp.begin();
  while (it != sp.end())
  {
    if (it->second > h)
    {
      cout << it->first << endl;
      return 0;
    }
    it++;
  }

  cout << "atcoder" << endl;
  return 0;
}