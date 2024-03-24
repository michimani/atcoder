#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui prev = 0;
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;
    if (i > 1)
      cout << " ";
    if (i > 0)
      cout << a * prev;

    prev = a;
  }

  cout << endl;
  return 0;
}