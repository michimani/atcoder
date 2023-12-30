#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<bool> line(7, false);

  for (ui i = 0; i < 10; i++)
  {
    char p;
    cin >> p;

    if (i == 0 && p == '1')
    {
      cout << "No" << endl;
      return 0;
    }

    if (p == '0')
    {
      continue;
    }
    switch (i + 1)
    {
    case 7:
      line[0] = true;
      break;

    case 4:
      line[1] = true;
      break;

    case 2:
    case 8:
      line[2] = true;
      break;

    case 1:
    case 5:
      line[3] = true;
      break;

    case 3:
    case 9:
      line[4] = true;
      break;

    case 6:
      line[5] = true;
      break;

    case 10:
      line[6] = true;
      break;

    default:
      // noop
      break;
    }
  }

  bool s = false;
  bool b = false;
  for (ui i = 0; i < 7; i++)
  {
    if (b && line[i])
    {
      cout << "Yes" << endl;
      return 0;
    }

    if (s && !line[i])
    {
      b = true;
    }

    s = s || line[i];
  }

  cout << "No" << endl;

  return 0;
}