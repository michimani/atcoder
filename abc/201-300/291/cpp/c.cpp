#include <iostream>
#include <vector>
#include <map>

using namespace std;

string coord_str(int x, int y)
{
  return to_string(x) + "," + to_string(y);
}

int main()
{
  unsigned int n = 0;
  cin >> n;

  string S = "";
  cin >> S;
  map<string, bool> coordinates;
  int x = 0, y = 0;
  coordinates[coord_str(x, y)] = true;
  for (auto &s : S)
  {
    switch (s)
    {
    case 'R':
      x++;
      break;
    case 'L':
      x--;
      break;
    case 'U':
      y++;
      break;
    case 'D':
      y--;
      break;
    default:
      break;
    }

    string key = coord_str(x, y);
    if (coordinates.count(key) != 0)
    {
      cout << "Yes" << endl;
      return 0;
    }

    coordinates[coord_str(x, y)] = true;
  }

  cout << "No" << endl;
}