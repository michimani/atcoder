#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w;
  cin >> h >> w;

  string e(w + 2, '#');
  cout << e << endl;
  for (; h--;)
  {
    string r;
    cin >> r;
    cout << "#" << r << "#" << endl;
  }
  cout << e << endl;

  return 0;
}