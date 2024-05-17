#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<ui, bool> c;
  for (ui i = 0; i < 3; i++)
  {
    ui a;
    cin >> a;
    c[a] = true;
  }

  cout << c.size() << endl;
  return 0;
}