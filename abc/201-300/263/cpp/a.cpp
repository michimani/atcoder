#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<ui, ui> dc;

  for (ui i = 0; i < 5; i++)
  {
    ui d;
    cin >> d;

    dc[d]++;
  }

  if (dc.size() == 2 && (dc.begin()->second == 3 || dc.begin()->second == 2))
  {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;
  return 0;
}