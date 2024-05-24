#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<string> w = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
  map<string, ui> wi = {
      {"SUN", 0},
      {"MON", 1},
      {"TUE", 2},
      {"WED", 3},
      {"THU", 4},
      {"FRI", 5},
      {"SAT", 6},
  };

  string s;
  cin >> s;

  ui i = 0;
  for (; i < 7; i++)
    if (w[(wi[s] + i) % 7] == "SUN")
      break;

  cout << (i == 0 ? 7 : i) << endl;

  return 0;
}