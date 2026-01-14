#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  for (ui i = 1; i <= n; i++)
    cout << (i <= m ? "OK" : "Too Many Requests") << endl;

  return 0;
}