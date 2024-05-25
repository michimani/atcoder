#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, p;
  cin >> n >> p;

  ui f = 0;
  for (; n--;)
  {
    ui a;
    cin >> a;
    f += ui(a < p);
  }

  cout << f << endl;

  return 0;
}