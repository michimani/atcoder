#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, ui> icm;
  map<ui, ui> fim;
  for (ui i = 0; i < 3 * n; i++)
  {
    ui a;
    cin >> a;
    icm[a]++;
    if (icm[a] == 2)
    {
      fim[i] = a;
    }
  }

  auto it = fim.begin();
  cout << it->second;
  it++;
  while (it != fim.end())
  {
    cout << " " << it->second;
    it++;
  }
  cout << endl;

  return 0;
}