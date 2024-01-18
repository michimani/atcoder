#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, ui> itob;
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;
    itob[i + 1] = a;
  }

  map<ui, bool> pushed;
  ui b = 1;
  while (true)
  {
    if (b == 2)
    {
      break;
    }

    if (pushed.count(b) > 0)
    {
      cout << "-1" << endl;
      return 0;
    }

    pushed[b] = true;
    b = itob[b];
  }

  cout << pushed.size() << endl;
  return 0;
}