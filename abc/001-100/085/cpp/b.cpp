#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<ui, bool> m;

  ui n;
  cin >> n;
  for (ui i = 0; i < n; i++)
  {
    ui d;
    cin >> d;
    m[d] = true;
  }

  cout << m.size() << endl;
  return 0;
}