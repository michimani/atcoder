#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<char, ui> dc;
  char d;
  for (ui i = 0; i < 6; i++)
  {
    cin >> d;
    if (d > '3' || d < '1')
    {
      cout << "No" << endl;
      return 0;
    }

    dc[d]++;
    if (dc['1'] > 1 || dc['2'] > 2 || dc['3'] > 3)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}