#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a = 0, b = 0;
  for (ui i = 2; i > 0; i--)
  {
    char c;
    cin >> c;
    a += ui(c - '0') * pow(10, i - 1);
  }
  for (ui i = 2; i > 0; i--)
  {
    char c;
    cin >> c;
    b += ui(c - '0') * pow(10, i - 1);
  }

  if (1 <= a && a <= 12)
    if (1 <= b && b <= 12)
      cout << "AMBIGUOUS" << endl;
    else
      cout << "MMYY" << endl;
  else if (1 <= b && b <= 12)
    if (1 <= a && a <= 12)
      cout << "AMBIGUOUS" << endl;
    else
      cout << "YYMM" << endl;
  else
    cout << "NA" << endl;

  return 0;
}