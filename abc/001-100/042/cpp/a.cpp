#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<ui, ui> h;
  for (ui i = 0; i < 3; i++)
  {
    ui a;
    cin >> a;
    h[a]++;
  }

  cout << (h[5] == 2 && h[7] == 1 ? "YES" : "NO") << endl;
  return 0;
}