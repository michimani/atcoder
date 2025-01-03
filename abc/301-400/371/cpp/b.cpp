#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  map<ui, map<char, ui>> ab;
  for (; m--;)
  {
    ui a;
    char b;
    cin >> a >> b;

    ab[a][b]++;

    if (b == 'M' && ab[a][b] == 1)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }

  return 0;
}