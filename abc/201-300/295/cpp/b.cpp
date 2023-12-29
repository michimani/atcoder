#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui r, c;
  cin >> r >> c;

  const char empty = 'E';
  vector<vector<char>> before(r, vector<char>(c, '.'));
  vector<vector<char>> after(r, vector<char>(c, '.'));
  for (ui y = 0; y < r; y++)
  {
    for (ui x = 0; x < c; x++)
    {
      cin >> before[y][x];

      if (after[y][x] != empty)
      {
        after[y][x] = before[y][x];
      }

      if (before[y][x] == '.' || before[y][x] == '#')
      {
        continue;
      }

      after[y][x] = 'E';

      int num = before[y][x] - '0';
      for (int by = max(0, int(y) - num); by <= min(int(r - 1), int(y) + num); by++)
      {
        for (int bx = max(0, int(x) - num); bx <= min(int(c - 1), int(x) + num); bx++)
        {
          if (abs(int(y) - by) + abs(int(x) - bx) <= num)
          {
            after[(ui)(by)][(ui)(bx)] = 'E';
          }
        }
      }
    }
  }

  for (auto &rr : after)
  {
    for (auto &cc : rr)
    {
      char o = (cc == 'E') ? '.' : cc;
      cout << o;
    }
    cout << endl;
  }

  return 0;
}