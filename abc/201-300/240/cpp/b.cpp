#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, bool> nm;
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;
    nm[a] = true;
  }

  cout << nm.size() << endl;
  return 0;
}