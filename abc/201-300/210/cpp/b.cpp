#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  bool t;
  for (ui i = 0; i < n; i++)
  {
    t = i % 2 == 0;

    char s;
    cin >> s;
    if (s == '1')
    {
      break;
    }
  }

  if (t)
  {
    cout << "Takahashi" << endl;
  }
  else
  {
    cout << "Aoki" << endl;
  }

  return 0;
}