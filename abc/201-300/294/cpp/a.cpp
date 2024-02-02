#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  bool yet = true;
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;
    if (a % 2 > 0)
    {
      continue;
    }

    if (!yet)
    {
      cout << " ";
    }
    cout << a;
    yet = false;
  }

  cout << endl;

  return 0;
}